#include <stdio.h>

void readArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
}

void printArray(int arr[], int size)
{
  printf("Array elements are : ");
  for (int i = 0; i < size; i++)
  {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

int main()
{
  int size;
  printf("Enter the size of array : ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter array elements : ");
  readArray(arr, size);
  printArray(arr, size);

  return 0;
}