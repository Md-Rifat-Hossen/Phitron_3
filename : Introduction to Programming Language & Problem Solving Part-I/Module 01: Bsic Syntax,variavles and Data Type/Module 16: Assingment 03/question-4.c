#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int capital=0,small=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            capital++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            small++;
        }
    } 
    printf("%d %d\n",capital,small);
    return 0;
}