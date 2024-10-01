#include<stdio.h>
int main()
{
    unsigned int x,y; //x=no.of bread loaves purchased,y=total  bill
    printf("enter the no.of bread loaves purchased:\n");
    scanf("%u",&x);
    y=x*5;
    printf("your bill is:%u\n",y);
    return 0;
}