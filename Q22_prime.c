#include<stdio.h>
int main()
{
    int flag=0;
    unsigned int i,n;
    printf("enter a number\n");
    scanf("%u",&n);
    if(n!=0){
        for(i=2;i<n;i++){
            if(n%i==0){flag=1;
            break;}}
    if (flag) {printf("not prime\n");}
    else{printf("prime\n");}}
    else{printf("0 is neither prime nor composite\n");}
    return 0;
}