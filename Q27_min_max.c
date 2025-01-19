#include<Stdio.h>
int main()
{
    unsigned int x;
    printf("enter the number of digits you want to enter:\n");
    scanf("%u",&x);
    int xyz[x];
    printf("enter the numbers\n");
    for (int i=0;i<x;i++){
        scanf("%d",&xyz[i]);
    }
    printf("the numbers are is:\n");
    for(int i=0;i<x;i++){
        printf("%d\t",xyz[i]);
    }
    for (int i=0;i<x-1;i++){
        for(int j=0;j<x-i-1;j++){
            if(xyz[j]>xyz[j+1]){
                int temp=xyz[j];
                xyz[j]=xyz[j+1];
                xyz[j+1]=temp;
            }
        }
    }
    printf("\nthe greatest number is %d",xyz[x-1]);
    printf("\nthe smallest number is %d",xyz[0]);
    return 0;
}