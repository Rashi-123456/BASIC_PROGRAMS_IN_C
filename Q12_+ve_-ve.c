#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:\n");
    scanf("%d",&x);
    if(x>0){printf("positive\n");}
    else if(x<0){printf("negative\n");}
    else{printf("zero");}
    return 0;
}