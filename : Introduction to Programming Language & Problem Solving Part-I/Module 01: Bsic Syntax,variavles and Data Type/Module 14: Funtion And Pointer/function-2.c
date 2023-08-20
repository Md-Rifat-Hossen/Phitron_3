// return + no parameter
#include<stdio.h>
int sum()
{  //input newar kaj
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
int main()
{    //call kora hoice
     int s=sum();
     //call korar por kaj
     printf("%d\n",s);
    return 0;
}