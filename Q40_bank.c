#include<stdio.h>
int main()
{
    unsigned int d,w,ch,bb=10000;
    printf("please enter a choice from the following:\n1.deposit\n2.withdraw\n3.check balance\nothers for exit\n");
    scanf("%u",&ch);
    switch(ch){
        case 1:
        printf("enter the amount to be deposited:\n");
        scanf("%u",&d);
        bb+=d;
        printf("now your bank balance is%u\n",bb);
        break;
        case 2:
        printf("enter the amount to be withdrawn :\n");
        scanf("%u",&w);
        bb-=w;
        printf("now your bank balance is%u\n",bb);
        break;
        case 3:
        printf("now your bank balance is%u\n",bb);
        break;
        default:
        printf("bye bye!!\n");
    }
    return 0;
}