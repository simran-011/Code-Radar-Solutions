#include <string.h>
void caesarCipher(char message[], int shift,  char encrypted[]) {
    // char encrypted[100];
    for(int i=0; i< strlen(message); i++) {
        if((message[i] >=65 && message[i]<=90) || message[i]>=97 && message[i] <=122) {
               encrypted[i] = message[i] + shift;
        }
    }
    
}