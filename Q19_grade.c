#include<stdio.h>
int main()
{
    unsigned int a,b,c,d,e;
    float avg;
    printf("enter the marks of five subjects : \n");
    scanf("%u%u%u%u%u",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    if(avg>=90){printf("your marks %f gives A grade\n",avg);}
    else if(avg>=80){printf(" your marks is %f gives B grade\n",avg);}
    else if(avg>=70){printf(" your marks is %f gives C grade\n",avg);}
    else if(avg>=60){printf("your marks is %f gives D grade\n",avg);}
    else{printf("your marks is %f gives less than D grade",avg);}
    return 0;
}