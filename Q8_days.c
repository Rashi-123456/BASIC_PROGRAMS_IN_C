#include<stdio.h>
int main ()
{
    unsigned int d; //d=day
    float m,y; //m=mont,y=year
    printf("enter the no.of days:\n");
    scanf("%d",&d);
    m=d/30;
    y=m/12;
    printf("the no.of months is %f and no.of years is %f\n",m,y);
    return 0;
}