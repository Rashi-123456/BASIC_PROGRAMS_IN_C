#include<stdio.h>
int main()
{
    unsigned int x;
    printf("enter the number:\n");
    scanf("%u",&x);
    if(x%4==0){printf("leap year\n");}
    else{printf("not a leap year\n");}
    return 0;
}