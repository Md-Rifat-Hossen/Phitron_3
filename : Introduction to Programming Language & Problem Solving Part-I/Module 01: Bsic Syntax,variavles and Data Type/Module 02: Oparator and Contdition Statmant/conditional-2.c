#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 100)
    {
        printf("burgar khabo");
    }
    else if (tk >= 50)
    {
        printf("fchkha khabo");
    }
    else if (tk >= 20)
    {
        printf("water khabo");
    }
    else
    {
        printf("kiso khabo na");
    }
    return 0;
}