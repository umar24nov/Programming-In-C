//Display this AP --> 4,7,10,13,16......n terms.
//First calculate nth term in this case it will be --> (3n+1)
//And calculate common difference --> 3
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    for(int i = 4;i <= 3*n+1;i = i + 3)
{
    printf("%d ",i);
}

    return 0;
}