#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int l;
    int flag=0;
    printf("enter a string:\n");
    scanf("%s",&x);
    l=strlen(x);
    for(int i=0;i<l/2;i++){
        if(x[i]!=x[l-i-1]){flag=1;
        break;}}
    if(flag){printf("not a palindrone\n");}
    else{printf("palindrone\n");}
    return 0;
}