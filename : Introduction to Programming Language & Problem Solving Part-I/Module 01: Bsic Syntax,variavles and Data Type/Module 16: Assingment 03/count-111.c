#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int cnt[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int val=s[i]-'a';
        cnt[val]++;
    }
    for(int i=0;i<26;i++)
    {
        printf("%c - %d\n",i+'a',cnt[i]);
    }
    return 0;
}