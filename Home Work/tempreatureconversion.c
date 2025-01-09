// tempreature conversion from celcius to fahrenheit
#include <stdio.h>
int main () {
    float celcius,fah;
    printf("Enter tempreature in celcius: ");
    scanf("%f",&celcius);
    fah = (9 * celcius)/5 + 32;
    printf("Tempreature in fahrenheit is %f",fah);

    return 0;
}