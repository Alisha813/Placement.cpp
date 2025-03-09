WAP to input a number and print that number into words like 123 as One Two Three
#include <stdio.h>
void printNumberinwords(int num) {
    char *words[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    if (num == 0) {
        printf("%s", words[0]);
        return;
    }

    while (num > 0) {
        int digit = num % 10;
        printf("%s ", words[digit]); 
        num /= 10; 
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The number in words: ");
 	printNumberinwords(num);

    return 0;
}
