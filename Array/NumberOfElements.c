#include <stdio.h>
void readArray (int arr[], int size) {
    printf("Enter the elements in array : ");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
int main () {
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];

    readArray(arr, size);

    int count = 0;
    for (int  i = 0; i < size; i++)
    {
        if (arr[i] != 0) {
            count++;
        }
    }
    printf("Number of non-zero elements in array is/are : %d\n",count);
    
    return 0;
}