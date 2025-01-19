#include <stdio.h>
#include <ctype.h>
int main() {
    char str[1000];
    int i, wc = 0; //wc=word count
    int space= 0;
    printf("Enter the sentence: ");
    fgets(str, sizeof(str), stdin); //by fgets we can have a string that will take spaces also
    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            space++;
        } 
        else {
            wc++;
        }
    }
    printf("Number of words: %d\n", wc);
    return 0;
}
