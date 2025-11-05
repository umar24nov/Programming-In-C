#include <stdio.h>

int getId() {
    int id;
    printf("Enter your Id: ");
    scanf("%d", &id);
    return id;
}

int main () {
    int userId = getId();
    printf("Your Id is : %d", userId);
    return 0;
}