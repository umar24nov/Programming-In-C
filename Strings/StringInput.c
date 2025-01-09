// #include <stdio.h>

// int main () {
//     char str[50];
//     gets(str);
   
//     puts(str);
//     return 0;
// }


#include <stdio.h>

int main () {
    char str[40];
    puts("Enter a string: ");
    scanf("%[^\n]s",str);
    /*we can input more than one word of a string
    and print whole string */
    puts("Your input was : ");
    puts(str);
    return 0;
}