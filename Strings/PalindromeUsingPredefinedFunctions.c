#include <stdio.h>
#inlude <string.h>

int main () {
    char str1[50],str2[50];
    puts("Enter the string to check for drome: ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str1,str2) == 0) 
    printf("The string is drome");
    else
    printf("The string is not drome");
    return 0;
}