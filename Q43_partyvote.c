#include<stdio.h>
int main()
{
    printf("please enter the party you want to vote:\n1.bjp\n2.aap\n3.congress\nothers for exit\n");
    unsigned int ch;
    scanf("%u",&ch);
    int vbjp=10,vaap=10,vcong=10; //vbjp=votes of bjp assigned 10 intially
    switch(ch){
        case 1:
        vbjp+=1;
        printf("the votes of bjp is %d",vbjp);
        break;
        case 2:
        vaap+=1;
        printf("the votes of  aap is %d",vaap);
        break;
        case 3:
        vcong+=1;
        printf("the votes of congress is %d",vcong);
        break;
        default :
        printf("bye bye!!\n");
    }
}