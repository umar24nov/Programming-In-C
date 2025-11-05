c#include <stdio.h>

void readArray(int arr[], int size) {
    printf("Enter array elements : ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    printf("Array element are : ");
    for (int i = 0; i < size; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    
}
 
int main () {
    printf("Enter the size of array : ");
    int size;
    scanf("%d",&size);
    int arr[size];

    readArray(arr, size);
    printArray(arr, size);

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
      
    }
      printf("Sum of array elements are : %d\n",sum);
    
    
    return 0;
}