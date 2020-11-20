/*
 * 重排 = 两个字符串完全相等 = 两个字符串长度相等 => 排序 + 比较
 */
#
void cut2half(str, low, high)
{
    int middle;
    while (low < high)
    {
        middle = (low +high) / 2;
        cut2half(str, low, middle);
        cut2half(str, middle, high);
        docompare(str, low, middle, high);
    }
}

void sort(char *str)
{    
    cut2half(str, 0, strlen(str));
}

bool IsRearrangable(char *str1, char *str2)
{
    if(strlen(str1) != strlen(str2) || !str1 || !str2)
        return false;

    if(1 == strlen(str1))
    {
        if(*str1 == *str2)
            return true;
        else
            return false;
    }

    sort(str1);
    sort(str2);
    for (int i = 0; i < strlen(str1); i++)
    {
        if(str1[i] != str2[i])
            return false;
    }
    return true;
}


#84
bool IsRearrangable(char *str1, char *str2)
{
    if(strlen(str1) != strlen(str2) || !str1 || !str2)
        return false;

    if(1 == strlen(str1))
    {
        if(*str1 == *str2)
            return true;
        else
            return false;
    }

    int record[128] = {0};
    for (int i = 0; i < strlen(str1); i++)
    {
        record[str1[i]] += 1;
    }

    for (int j = 0; j < strlen(str2); j++)
    {
        record[str2[j]] -= 1;
        //优化
    }
    
    for (int k = 0; k < 128; k++)
    {
        if(record[k])
            return false;
    }
    return true;   
}
