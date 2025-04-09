#include <string.h>
void caesarCipher(char message[], int shift , char encrypted[100] ) {
    
    for(int i=0; i< strlen(message); i++) {
        if(message[i] >= 'A' && message[i] <='Z') {
            encrypted[i] = (message[i] - 'A' + shift) % 26 + 'A';
        } else if(message[i] >= 'a' && message[i] <='z') {
            encrypted[i] = (message[i] - 'a' + shift) % 26 + 'a';
        } else {
            encrypted[i] = message[i];
        }
    }
    encrypted[strlen(message)] = '\0';
    
}