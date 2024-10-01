#include<stdio.h>
int main()
{
    unsigned int x,i,s,y;
    float b=0.0; //b=bill
    s=0; //s=sum
    printf("enter the no of things purchased\n");
    scanf("%u",&x);
    for(i=0;i<x;i++){
        printf("enter the cost %u\n",i+1);
        scanf("%u",&y);
        s=y+s;}
    if(s>100){b=s-(s*0.1);
    printf("the total bill is %f\n",b);}
    else{printf("the total bill is %u\n",s);}
    return 0;
}
