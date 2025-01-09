#include <stdio.h>
#include <string.h>
int main () {
    struct book{
        char name[50];
        int price;
        int noOfpages;
        }a,b,c;
        a.noOfpages = 100;
        a.price = 375;
        strcpy(a.name,"Secret Seven");
        printf("%d\n",a.noOfpages);
        printf("%d\n",a.price);
        printf("%s\n",a.name);
    return 0;
}