#include <stdio.h>
#include <string.h>
int anagram(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2))
        return 0;
    int c[256] = {0};
    int i = 0;
    while(s1[i]) {
        c[s1[i]]++;
        c[s2[i]]--;
        i++;
    }
    for (int i = 0; i < 256; i++) {
        if (c[i] != 0) return 0;
    }
    return 1;
}
int main() {
    char s1[1000];
    char s2[1000];
    printf("enter 1st string:");
    scanf("%s",&s1);
    printf("enter 2nd string:");
    scanf("%s",&s2);
    if (anagram(s1, s2))
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}