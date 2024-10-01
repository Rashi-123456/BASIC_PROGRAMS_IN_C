#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int l,g;
    printf("enter the string:\n");
    scanf("%s",&x);
    l=strlen(x);
    for(g=l-1;g>=0;g--){
        printf("%c",x[g]);}
    return 0;
}