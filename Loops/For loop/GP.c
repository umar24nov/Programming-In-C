//Display this GP : 1,2,4,8....upto n terms
#include <stdio.h>
int main()
{
int n;
printf("Enter your Number: ");
scanf("%d",&n);
int a = 1;
for (int i = 1; i <= n;i++)
{
printf("%d ",a);
a = a*2;
}

    return 0;
}