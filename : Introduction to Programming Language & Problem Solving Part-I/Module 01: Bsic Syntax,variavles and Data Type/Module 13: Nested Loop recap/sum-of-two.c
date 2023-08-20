#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    /* for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            printf("%d %d\n", i, j);
        }
    } */
    
    int x;
    scanf("%d",&x);
    int flag=0;//this tearm use becousse do the  condition cheack flag value can change with 1 or 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(a[i]+a[j]==x)
         {
            flag=1;
         }
        }
    }
    if(flag==0)
    {
        printf("NO\n");
    }
    else
    {
     printf("YES\n");
    }
   

    return 0;
}