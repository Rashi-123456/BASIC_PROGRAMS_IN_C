#include<stdio.h>
int main()
{
    unsigned int a,b,c,d,e,avg; //calculation of avg of any five numbers
    printf("enter the five numbers:\n");
    scanf("%u%u%u%u%u",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("the average of the given 5 numbers is %u\n",avg);
    return 0;
}
