#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)) {
        if(islower(ch)) {
            printf("Lowercase");
        } else {
            printf("Uppercase");
        }
    }
        
}