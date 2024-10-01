#include<stdio.h>
int main()
{
    unsigned int x;
    printf("enter the number:\n");
    scanf("%u",&x);
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    printf("factorial of the number %u is %d\n",x,fact);
    return 0;
}