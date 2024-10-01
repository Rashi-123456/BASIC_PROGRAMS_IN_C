# include<stdio.h>
int main()
{
    float c,f; //c=celcius,f=farenheit
    printf("enter the temp in celcius:\n");
    scanf("%f",&c);
    f=(9*c)/5+32;
    printf("the given temp in farenheit is:%f\n",f);
    return 0;
}
