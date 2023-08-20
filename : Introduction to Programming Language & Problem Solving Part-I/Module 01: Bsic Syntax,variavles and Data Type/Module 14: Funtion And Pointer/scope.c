#include<stdio.h>
int x=500;
void fun(void)
{
    //int s=100;
   // printf("fun s er adress-%p\n",&s);
    printf("fun s er adress-%p\n",&x);
}
int main()
{
    // int s=200;
//printf("main s er adress-%p\n",&s);
printf("main s er adress-%p\n",&x);
fun();

    return 0;
}