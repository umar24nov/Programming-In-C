#include <stdio.h>
#include <stdbool.h>

int main () {
    int arr[] = {12,45,31,15,36,75};
    int n = sizeof(arr)/4;
    for(int i = 0; i < n; i++) 
    {
        printf("%d\n",arr[i]);
    }
     
    int x = 75;
    bool flag = false;
    for(int i = 0; i < n; i++)  {
        if(arr[i] == x) {
            flag = true;
            break;
        }
    }
    if(flag == true) 
    {
        printf("%d Exists!",x);
    }

    
    else
    {
        printf("%d Does not exist!",x);
    } 
    return 0;
}