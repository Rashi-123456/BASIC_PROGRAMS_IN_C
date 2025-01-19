#include<stdio.h>
int main()
{
    unsigned int a,b,c,d,e; //marks of any 5 subjects are stored in a,b,c,d,e
    float avg; //overall average of the given 5 marks
    printf("enter your marks of 5 subjects:\n");
    scanf("%u%u%u%u%u",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    if(avg>=90){printf("%f gives you grade A\n",avg);}
    else if(avg>=80){printf("%f gives you grade B\n",avg);}
    else if(avg>=70){printf("%f gives you grade C\n",avg);}
    else if(avg>=60){printf("%f gives you grade D\n",avg);}
    else if(avg>=50){printf("%f gives you grade E\n",avg);}
    else{printf("FAIL\n");}
    return 0;
}