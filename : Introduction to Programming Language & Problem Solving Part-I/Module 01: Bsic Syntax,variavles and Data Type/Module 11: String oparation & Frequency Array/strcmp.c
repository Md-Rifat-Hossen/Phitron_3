#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[1000];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    printf("%d",v); 

    return 0;
}