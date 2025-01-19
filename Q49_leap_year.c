#include<stdio.h>
int main()
{
    unsigned int y;
    printf("enter the year\n");
    scanf("%u",&y); //y=year
    if(y==0){printf("0 cant be a year");}
    else if(y%4==0){printf("yes %u is a leap year",y);}
    else{printf("no %u is not a leap year",y);}
    return 0; 
}