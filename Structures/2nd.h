#include <stdio.h>
#include <string.h>
int main () {
    struct person{
        char name[50];
        int salary;
    }A,B;
       // struct person A,B;
        A.salary = 130000;
        strcpy(A.name,"Raman");
        printf("%s\n",A.name);

        B.salary = 200000;
        strcpy(B.name,"Raghav");
        printf("%d\n",B.salary);
        
        return 0;
}



