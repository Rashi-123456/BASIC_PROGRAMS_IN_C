#include<stdio.h>
int main()
{
    unsigned int p,n;
    unsigned int x;
    printf("enter the number\n");
    scanf("%u",&n);
    printf("enter the power\n");
    scanf("%u",&p);
    x=1;
    for (int i=0;i<p;i++){
        x=n*x;
    }
    printf("%u",x);
    return 0;
}