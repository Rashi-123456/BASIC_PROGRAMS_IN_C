#include<stdio.h>
#include<string.h>
int main()
{
    char x;
    printf("enter the string:\n");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='u'){
        printf("%c is a vowel\n",x);}
    else{printf("%c is not a vowel\n",x);}
    return 0;
}