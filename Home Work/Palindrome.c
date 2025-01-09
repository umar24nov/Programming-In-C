// ndrome of a number
#include <stdio.h>
int main () {
    int n, c, r, s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    c = n;
    while(n>0) {
        r = n % 10;
        s = r + (s*10);
        n = n/10;
    }
    if(c==s)
    printf("This is palindrome number  !\n");
    else printf("This is not a palindrome number !");
    return 0;
}