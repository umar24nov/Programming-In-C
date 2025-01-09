#include <stdio.h>

// Function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char helper) {
    // Base case: If there is only one disk
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    
    // Move n-1 disks from 'source' to 'helper' using 'destination'
    towerOfHanoi(n - 1, source, helper, destination);
    
    // Move the nth disk from 'source' to 'destination'
    printf("Move disk %d from %c to %c\n", n, source, destination);
    
    // Move the n-1 disks from 'helper' to 'destination' using 'source'
    towerOfHanoi(n - 1, helper, destination, source);
}

int main() {
    int n; // Number of disks
    
    // Input number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    
    // Call the Tower of Hanoi function
    printf("The sequence of moves involved are:\n");
    towerOfHanoi(n, 'S', 'D', 'H'); // S = Source, D = Destination, H = Helper
    
    return 0;
}
