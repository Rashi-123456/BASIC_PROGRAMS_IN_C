#include<stdio.h>
int main()
{
    float w,h,bmi;
    printf("enter your height and weight:\n");
    scanf("%f%f",&h,&w);
    bmi=w/(h*h);
    printf("your bmi is %f",bmi);
    return 0;
}