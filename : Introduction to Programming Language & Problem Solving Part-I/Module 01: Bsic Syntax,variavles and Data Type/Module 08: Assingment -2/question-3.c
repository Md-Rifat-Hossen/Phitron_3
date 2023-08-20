#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&ar[i]);
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
        even=even+ar[i];
        }
        else
        {
         odd=odd+ar[i];
        }
    }
    printf("%d ",even);
    printf("%d",odd);
    return 0;
}