// Display this GP : 1,2,4,8,16,32.....upto n terms

#include<stdio.h>
int main ()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    int a=1;
    for(int i = 1;i<=n;i++)
    {
        printf("%d\t",a);
        a = (a*2);
    }



    return 0;
}