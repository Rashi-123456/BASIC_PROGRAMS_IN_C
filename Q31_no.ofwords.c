#include<stdio.h>
#include<string.h>
int countwords(char sentence[]){
    int count=0;
    for(int i=0;sentence[i]!='\0';++i){
        count++;
    }
    return count;
}
int main()
{
    char sent[100];
    printf("enter the string\n");
    scanf("%s",&sent);
    printf("no.of words are %d",countwords(sent));
    return 0;
}