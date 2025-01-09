#include <stdio.h>

int main () {
    int target,found = 0;
    printf("Enter target element ");
    scanf("%d",&target);
    int arr[] = {1,2,3,4,5,6,7,8,9,};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0;i < n;i++)  { 
        if(arr[i]  == target) { printf("Exists! ");
           found = 1;
           break;
    }
    }
    if(found == 0) printf("Does not exists! ");
     
    return 0;
}