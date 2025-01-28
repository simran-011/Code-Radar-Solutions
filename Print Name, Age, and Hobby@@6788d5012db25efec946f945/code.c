#include <stdio.h>


int main() {
    int age;
    char name[100];
    char hobby[100];
    scanf("%s %d %s",&name,&age,&hobby);
   
    
    
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}