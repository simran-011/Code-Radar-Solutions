#include <stdio.h>
int main() {
    int monthNum, days = 0;
    scanf("%d",&monthNum);
    switch(monthNum) {
        case 1:
                days = 31;
                printf("%d",days);
                break;
        case 2: 
                days = 28;
                printf("%d",days);
                break;
        case 3:
                days = 31;
                printf("%d",days);
                break;
        case 4:
                days = 30;
                printf("%d",days);
                break;
        case 5:
                days = 31;
                printf("%d",days);
                break;
        case 6:
                days = 30;
                printf("%d",days);
                break;
        case 7:
                days = 31;
                printf("%d",days);
                break;
        case 8:
                days = 31;
                printf("%d",days);
                break;
        case 9:
                days = 30;
                printf("%d",days);
                break;
        case 10: 
                days = 31;
                printf("%d",days);
                break;
        case 11:
                days = 30;
                printf("%d",days);
                break;
        case 12:
                days = 31;
                printf("%d",days);
                break;
        default:
                printf("Invalid month");     
    }
    return 0;
}