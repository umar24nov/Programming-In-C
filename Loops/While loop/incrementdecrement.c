// predict the output :
#include <stdio.h>
int main()
{
    int x = 4, y, z;
    y = --x; // --x means print increment then use
    z = x--; // x-- means print use x then increment
    printf("\n%d%d%d", x, y, z);
    return 0;
}