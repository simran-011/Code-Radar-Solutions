#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)) {
        printf("Not an alphabet");
    } else if(islower(ch)) {
        printf("Lowercase");
    } else {
        printf("Uppercase");
    }
        
}