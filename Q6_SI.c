#include<stdio.h>
int main()
{
    unsigned int p,r,t,si; //p=principle,r=rate,t=time,si=simple interest
    printf("enter the principle\nrate \ntime\n");
    scanf("%u%u%u",&p,&r,&t);
    si=(p*r*t)/100;
    printf("simple interest is:%u\n",si);
    return 0;
}
