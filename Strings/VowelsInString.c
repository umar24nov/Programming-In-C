#include <stdio.h>

int main () {
    char ch[] = "I am the best";
   int count = 0;
   for(int i = 0; ch[i]!='\0';i++) {
    if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'  )
   { 
   count++;
   
   }
}
    printf("The number of vowel is : %d\n",count);
    return 0;
}