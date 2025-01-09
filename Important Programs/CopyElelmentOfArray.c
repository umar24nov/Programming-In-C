#include <stdio.h>

int main () {
    int arr[] = {1, 5, 7 ,9};
    int arr2[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0;i < n; i++) {
        arr2[i] = arr[i];
    }
    printf("Source Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("Destination Array: ");
    for (int i = 0; i < n; i++    ) {
        printf("%d ", arr2[i]);
    }

    return 0;
}