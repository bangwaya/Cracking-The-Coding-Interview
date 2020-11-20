/*
 *替换 => 长度变化 => 移动和复制 => 溢出
 */
#
char * toURL(char *str, int len)
{
    if(NULL == str)
        return NULL;
    
    char *new = malloc(sizeof(str));
    char text[3] = {'%', '2', '0'};
    char *current = new;
    char *start = NULL;
    int spaceNum, charNum, pos;
    while(pos < len)
    {
        if(' ' == str[pos])
        {
            if(charNum)
            {
                spaceNum++;
                str++;
                pos++;
                while (' ' == str[pos])
                {
                    spaceNum++;
                    pos++;
                }
                memcpy(current, start, charNum);
                current += charNum;
                for(int i = 0; i < spaceNum; i++)
                {
                    memcpy(current, text, 3);
                    current += 3;
                }
                spaceNum = 0;
                charNum = 0;
            } else {
                pos++;
            }
        } else {
            if(0 == charNum)
                start = str + pos;
            charNum++;
            pos++;
        }
    }

    if(charNum)
    {
        memcpy(current, start, charNum);
        *(current + charNum) = '\0';
    }
    return new;
}
