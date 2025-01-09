//Take the value from the user and write a program to find if area is greater than perimeter
#include <stdio.h>
int main (){
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth : ");
    scanf("%d",&b);
    int a;
    a = l * b;
    int p;
    p = 2 * (l+b);
    if (a > p)
    {
      printf("Area is greater than perimeter");
    }
    
    else
    {
        printf("Area is not greater than perimeter");
    }


    return 0;

}