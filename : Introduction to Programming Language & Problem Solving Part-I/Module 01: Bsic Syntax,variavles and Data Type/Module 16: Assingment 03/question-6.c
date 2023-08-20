#include<stdio.h>
int main()
{
    int m1,m2,d;
    scanf("%d%d%d",&m1,&m2,&d);
     int day=m1*d;
     int day1=day/m2;
    printf("%d\n",day1); 
    return 0;
}