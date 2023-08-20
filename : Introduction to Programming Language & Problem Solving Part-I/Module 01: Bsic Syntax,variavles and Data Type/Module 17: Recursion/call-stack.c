#include<stdio.h>
void world()
{
    printf("world star\n");
    printf("world end\n");

}
void hello()
{
    printf("hello star\n");
    world();
    printf("hello ened\n");
}
int main()
{
    printf("main star\n"); 
    hello();
    printf("main end\n"); 
    return 0;
}