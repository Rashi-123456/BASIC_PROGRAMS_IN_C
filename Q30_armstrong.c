#include<stdio.h>
#include<math.h>
int armstrongsum(int n,int k)
{
    if(n==0){
        return 0;
    }
    int digit=n%10;
    return pow(digit,k)+armstrongsum(n/10,k);
}
int isarmstrong(int n)
{
    int k=log10(n)+1;
    int sum=armstrongsum(n,k);
    return(sum==n);
}
int main()
{
    printf("enter the number\n");
    unsigned int num;
    scanf("%u",&num);
    if(isarmstrong(num)){
        printf("armstrong number\n");
    }
    else{printf("not a armstrong number\n");}
    return 0;
}
