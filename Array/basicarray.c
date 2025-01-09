#include <stdio.h>

int main () {
    int arr[5];
    for(int i=0;i<5;i++){
        printf("\nEnter element number %d ",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    printf("The %d index value of array is %d\n",i,arr[i]);
    return 0;
}