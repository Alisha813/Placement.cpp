//WAP to input 10 floating values from user and show the smallest and biggest numbers in given values
#include <stdio.h>
int main() {
    float numbers[10], smallest, largest;
    int i;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++){
        if (scanf("%f", &numbers[i]) != 1) {  
            printf("Invalid input! Please enter numbers only.\n");
            return 1; 
        }
    }

    smallest = largest = numbers[0];
    for (i = 1; i < 10; i++) {
        if (numbers[i] < smallest) 
            smallest = numbers[i];
        if (numbers[i] > largest) 
            largest = numbers[i];
    }

    printf("Smallest: %.2f\n", smallest);
    printf("Largest: %.2f\n", largest);
    
    return 0;
}
