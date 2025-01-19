#include<stdio.h>
int main()
{
    float p,n,bill;
    printf("enter the number of items purchased and its cost\n");
    scanf("%f%f",&n,&p);
    bill=p*n;
    printf("your bill is:%f",bill);
    return 0;
}