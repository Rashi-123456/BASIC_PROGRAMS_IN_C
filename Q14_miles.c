#include<stdio.h>
int main()
{
    float k,m; //k=distance in kilometers,m=distance in miles
    printf("enter kilometers:\n");
    scanf("%f",&k);
    m=0.62*k;
    printf("%f is in miles\n",m);
    return 0;
}