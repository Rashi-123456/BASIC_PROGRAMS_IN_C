#include<stdio.h>
int main()
{
    unsigned int x,y,z;
    printf("enter the numbers:\n");
    scanf("%u%u%u",&x,&y,&z);
    if(x!=y && x!=z && y!=z){
    if(x>y){
        if(x>z){printf("the maximum number is : %u",x);}
        else{printf("the maximum no.is is : %u",z);}
    }
    else {
        if(y>z){printf("the maximum no.is : %u",y);}
        else{printf("the maximum no.is : %u",z);}
    }}
    else{printf("please enter three different numbers next time\n");}
    return 0;
}