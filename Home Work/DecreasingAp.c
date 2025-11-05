// display this AP:  100,97,94...n terms
#include <stdio.h>
int main ()
    {
    int n;
    printf("Enter Your Number: ");
    scanf("%d",&n);
    int a = 100;
    for(int i = 1; a > 0;i++)
        // for(int i = 1; i <= 34;i++)
    {
        
        printf("%d  ",a);
        a = a - 3;
    }
        return 0;
    }   

