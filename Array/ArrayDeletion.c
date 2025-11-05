#include <stdio.h>
void displayArray(int arr[],int n) 
{
    for(int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
void arrayDeletion(int arr[], int size,int index)
{
    for(int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i+1];
    }
}
int main () {
    int arr[100] = {2,5,3,8,9};
    int size = 5, element = 8, index = 2;
    displayArray(arr,size);
    arrayDeletion (arr, size, index);
    size--;
    displayArray(arr,size);
    return 0;
}