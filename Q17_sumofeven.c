#include<stdio.h>
int main()
{
    int x=0;
    for(int i=1;i<101;i++){
        if(i%2==0){x=x+i;}
    }
    printf("the sum of even numbers less than 100 is %d\n",x);
    return 0;
}