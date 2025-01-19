#include<stdio.h>
int main()
{
    float m,h,s;
    printf("enter the time in minutes:\n");
    scanf("%f",&s);
    m=s/60;
    h=m/60;
    printf("the time in minutes %f\n",m);
    printf("the time in hours is %f\n",h);
}