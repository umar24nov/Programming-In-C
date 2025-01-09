//Check wheather if it a leap year or not
#include <stdio.h>
int main(){
   int x;
   printf("Enter a number : ");
   scanf("%d",&x);
   if((x%4==0 && x%100!=0) || (x%400==0))
   {
    printf("It is a leap year");
   }
   else{
    printf("it is not a leap year");
   }
    return 0;
   }
