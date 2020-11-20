#Brute solution
bool IsUnique(char *str)
{
    if(NULL == str)
        return false;

    if(1 == strlen(str))
        return true;
    
    for(int i = 0; i < strlen(str); i++)
    {
        for(int j = i; j < strlen(str); j++)
        {
            if(str[i] == str[j])
                return false;
        }
    }
    return true;
}

#44
typedef struct node
{
    int val;
    struct node *next;
} Node;

bool IsUnique(char *str)
{
    if(NULL == str)
        return false;

    if(1 == strlen(str))
        return true;
    
    Node *list[10] = {0};
    int index = 0;
    for(int i = 0; i < str(len); i++)
    {
        Node new;
        new.val = str[i];
        index = str[i] % 10;

            Node *p = list[index];
        while (p)
        {
            if(p->val != new.val)
                p = p->next;
            else
                return false;
        }
        new.next = list[index];
        list[index] = &new;
    }
    return true;
}

#117
typedef struct node
{
    int val;
    struct node *next;
} Node;

bool IsUnique(char *str)
{
    if(NULL == str)
        return false;

    if(1 == strlen(str))
        return true;

    for(int i = 0; i < strlen(str); i++)
    {

    }
}



bool IsUnique(char *str)
{
    if(NULL == str)
        return false;

    if(1 == strlen(str))
        return true;

    for(int i = 0; i < strlen(str); i++)
    {

    }

void cut2half(low, high)
{
    while(low < high)
    {
        middle = (low + high) / 2;
        cut2half(low, middle);
        cut2half(middle + 1, high);
        docompare(low, middle, high);
    }
}

void docompare(char *str, int low, int middle, int high)
{
    int left = low;
    int right = middle + 1;

    while (left <= middle && right <= high))
    {
        if(str[left] == str[right])
            return false;
        else {

        }
    }
    
}
