#include<stdio.h>
int main()
{
    int n,sum=0,a=1;
    printf("Enter the last number : ");
    scanf("%d",&n);
    printf("1 + 4 + 7 + ..... + %d",n);
    while(a<=n)
    {
        sum = sum + a;
        a = a+3;
    } 
    printf(" = %d\n",sum);
    return 0;
}