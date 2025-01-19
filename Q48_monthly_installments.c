#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int p,r,t; //p=principal,r=rate,t=time
    float emi,x; //emi=monthly installment,x=temporary variable
    printf("enter the principal,rate ,time:\n");
    scanf("%u%u%u",&p,&r,&t);
    x=pow((1+r),t)/(pow((1+r),t)-1);
    emi=p*r*x;
    printf("monthly installments is %f\n",emi);
    return 0;
}