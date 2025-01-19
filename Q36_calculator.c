#include<stdio.h>
int main()
{
    int a,b,sum,subtract,division,product,ch;
    printf("enter the two numbers;\n");
    scanf("%d%d",&a,&b);
    printf("please enter your choice from the following\n1.sum\n2.difference\n3.multiply\n4.divide\nelse exit\n");
    scanf("%d",&ch);
    if(ch==1){sum=a+b;
    printf("the sum of %d and %d is %d\n",a,b,sum);}
    else if(ch==2){
        if(a>b){subtract=a-b;
        printf("the difference of%d and %d is %d\n",a,b,subtract);}
        else{subtract=b-a;
        printf("the difference of%d and %d is %d\n",b,a,subtract);}}
    else if(ch==3){product=a*b;
    printf("the product of%d and %d is%d\n",a,b,product);}
    else if(ch==4){if(b==0){printf("cant divide a number by zero\n");}
    else{division=a/b;
    printf("the division of%d by %d is%d\n",a,b,division);}}
    else{printf("bye bye!!!\n");}
    return 0;
}