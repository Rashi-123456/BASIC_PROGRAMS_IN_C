#include<stdio.h>
int main()
{
    unsigned int bb=10000;
    unsigned int d,w; //bb=bank balance initialized by 10000 rupees,d=amount to be deposited,w=amount to be withdrawn
    printf("enter your choice from the following\n1.check bankbalance\n2.to deposit\n3.to withdraw\nothers for exit\n");
    unsigned int ch; //ch=choice
    scanf("%u",&ch);
    switch(ch){
        case 1:
        printf("your bank balance is %u",bb);
        break;
        case 2:
        printf("enter the amount to be deposited:\n");
        scanf("%u",&d);
        bb+=d;
        printf("your current bank balnce is %u",bb);
        break;
        case 3:
        printf("enter the amount to be withdrawn:\n");
        scanf("%u",&w);
        bb-=w;
        printf("your current bank balance is %u",bb);
        break;
        default:
        printf("bye bye!!");
    }
    return 0;
}