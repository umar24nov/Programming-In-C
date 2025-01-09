//Check wheather the number is divisible by 5 or not
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n%5==0){
        printf("Yes , Divisible by 5");
    }
    else{
        printf("No , Not divisible by 5");
    }
    
   

    return 0;

}