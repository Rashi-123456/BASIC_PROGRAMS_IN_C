#include<stdio.h>
int main()
{
    unsigned int n;
    printf("enter the number till which you want to do fibonacci series:\n");
    scanf("%u",&n);
    unsigned int nt,x,y; //nt=next term
    x=1;
    y=1;
    printf("%u\t%u\t",x,y);
    for(int i=2;i<n;i++){
        nt=x+y;
        printf("%u\t",nt);
        x=y;
        y=nt;
    }
}