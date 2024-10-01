#include<stdio.h>
int main()
{
    unsigned int x; //x=cost of purchases
    float y; //y=discounted bill if cost of purchases is more than 200
    printf("enter the cost of purchases:\n");
    scanf("%u",&x);;
    if(x>200)
    {y=x-x*0.05;
    printf("the bill is:%f\n",y);}
    else{printf("the bill is:%u\n",x);}
    return 0;
}