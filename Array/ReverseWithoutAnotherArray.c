#include <stdio.h>
void reverseArray(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }  
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++) {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int main () {
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array : ");
    printArray(arr,n);

    reverseArray(arr,n);

    printf("Rversed Array : ");
    printArray(arr,n);
    return 0;
    }