#include<stdio.h>
int main()
{
    unsigned int a,b,diff;
    printf("enter the two dates:\n");
    scanf("%u%u",&a,&b);
    if(a<=31 && b<=31){if(a>b){diff=a-b;
    printf("the difference between the given dates is %d\n",diff);}
    else if(b>a){diff=b-a;
    printf("the difference between the given dates is %d\n",diff);}
    else{printf("same day\n");}
    return 0;}
    else{printf("date is not correctly entered");}
    return 0;
}