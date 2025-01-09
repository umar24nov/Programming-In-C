#include <stdio.h>

int main () {

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    int temp = x;

int rev = 0;

while(x != 0) {
    int digit = x % 10;
    rev = (rev * 10) + digit;
    // rev = (rev * 10) + x % 10;
    x = x / 10;
}
printf("Reversed number is : %d\n",rev);

if(temp == rev) {
    printf("Palindrome number!");
}
else {
    printf("Not a plindrome number!");
}

return 0;
}