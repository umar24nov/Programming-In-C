#include <stdio.h>
#include <string.h>
int main () {
    struct person{
        char name[50];
        int salary;
    }A,B;
    
        A.salary = 130000;
        strcpy(A.name,"Raman");
        printf("%s",A.name);
        

    
    
    return 0;
}