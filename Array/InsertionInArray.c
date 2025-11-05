#include <stdio.h>


void displayArray(int arr[], int n) {
      //Code For Traversal

      for(int i = 0; i < n; i++)
      {
            printf("%d  ", arr[i]);
      }
      printf("\n");
}
   
   int arrayInsertion(int arr[], int size,int element,int capacity,int index)
   {
      if (size >= capacity) 
      {
            printf("Insetion failed. Array is already full\n");
            return -1;
      } 

      for( int i = size -1; i >= index; i--)
      {
            arr[i+1] = arr[i];
      }
      arr[index] = element;
      printf("Insertion succesful !\n");
      return 1;
   }
int main() {
      int arr[5] = {1,4,5,3,7};
      int size = 4, element = 59, index = 3;
      printf("Array elements before insertion are : ");
      displayArray(arr,size);
      arrayInsertion(arr, size, element, 5, index);
      size ++;
      printf("Array elements after insertion : ");
      displayArray(arr, size);
      return 0;

}