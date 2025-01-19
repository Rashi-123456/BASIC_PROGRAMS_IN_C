#include<stdio.h>
int main()
{
    int i=0,sum=0;
    float t,avg;
    for(;i<7;i++){
        printf("enter the avg temp of %dth day\n",i+1);
        scanf("%f",&t);
        sum+=t;
    }
    avg=sum/7;
    printf("the average temperature of the week is %f",avg);
}