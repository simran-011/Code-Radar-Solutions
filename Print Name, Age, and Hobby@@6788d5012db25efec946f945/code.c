#include <stdio.h>


int main() {
    int age;
    char name[100];
    char hobby[100];
    scanf("%d %s %s",&age,&name,&hobby);
   
    
    
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}