#include<stdio.h>
int main()
{
    unsigned int x; //x=age
    printf("enter your age:\n");
    scanf("%u",&x);
    if(x>=18){printf("you can vote\n");}
    else{printf("you cant vote\n");}
    return 0;
}
