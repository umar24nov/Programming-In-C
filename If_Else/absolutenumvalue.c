//Take integer input and print the absolute value of that integer
#include <stdio.h>
int main(){
    int x;
    printf("Enter value of x : ");
    scanf("%d",&x);
    if(x<0){
        x = x * (-1);
    }
    printf("The absolute value is : %d",x);


    return 0;
}