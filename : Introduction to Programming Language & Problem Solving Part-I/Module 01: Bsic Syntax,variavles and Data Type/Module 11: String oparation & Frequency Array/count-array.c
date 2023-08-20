#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int cnt[7] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        cnt[val]++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", cnt[i]);
        // atr+seft+douwn arya;
    }
    return 0;
}