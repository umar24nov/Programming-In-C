// Functions Prototype
#include <stdio.h>

void australia()
{
    printf("You are in Australia\n");
    void england (); // function prototype
    england();
    return;
}
void england()
{
    printf("You are in England\n");
    return;
}

void india()
{
    printf("You are in India\n");
    void australia(); // function prototype
    australia();
    return ;
}
int main()
{
    void india(); // function prototype
    india();
    return 0;
}