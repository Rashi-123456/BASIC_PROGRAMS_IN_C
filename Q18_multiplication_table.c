#include<stdio.h>
int main()
{
    unsigned int x;
    printf("enter the number:");
    scanf("%u",&x);
    for(int i=1;i<11;i++){
        printf(" %u X %d = %u\n",x,i,x*i);
    }
}