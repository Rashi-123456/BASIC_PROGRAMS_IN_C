#include<stdio.h>
int main()
{
    unsigned int l,b; //l=length,b=breadth
    int area;
    printf("enter the length and breadth:\n");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("the area of the rectangle is %d\n",area);
    return 0;
}