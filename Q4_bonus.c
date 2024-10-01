#include<stdio.h>
int main()
{
    unsigned int m,a,n; //m=monthly salary,n=no.of years of working,a=annual salary
    printf("enter your monthly salary:\n");
    scanf("%u",&m);
    a=12*m;
    printf("enter years of working:\n");
    scanf("%u",&n);
    if(n>5){
        a=a+a*0.1; //the annual salary has a bonus of 10% of annual salary
        printf("your annual salary is %d\n",a);
    }
    else{
        printf("your annual salary is %d\n",a);
    }
    return 0;
}
