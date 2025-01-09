#include <stdio.h>
int main ()
{
int A,B,C,D,E;
printf("Enter your percentange : ");
scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
if(A>90)
{
printf("A Grade\n");
}
else if(B>=80 && B<=89)
{
printf("B Grade\n");
}
else if(C>=70 && C<=79)
{
printf("C Grade\n");
}
else if( D>=60 && D<=69)
{
    printf("D Grade\n");
}
else
 {
    printf("E Grade");
}
return 0;
}