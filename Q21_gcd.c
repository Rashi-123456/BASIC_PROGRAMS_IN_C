#include<stdio.h>
int main()
{
    unsigned int a,b,gcd;
    printf("enter two numbers:\n");
    scanf("%u%u",&a,&b);
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){gcd=i;}
    }
    printf("gcd of %u and %u is %u",a,b,gcd);
    return 0;
}