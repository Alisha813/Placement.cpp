//Write a C program that reads a string from the user and prints the frequency of each character, ignoring case
#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 256 

void printCharacterFrequency(char str[]) {
    int freq[MAX_CHAR] = {0}; 
	int i;
	char ch;
    for (i = 0; str[i] != '\0'; i++) {
        
        char ch = tolower(str[i]);

       
        if (ch >= 'a' && ch <= 'z') {
            freq[ch]++; 
        }
    }

 
    printf("Character Frequency (Ignoring Case):\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        if (freq[ch] > 0) {
            printf("%c: %d\n", ch, freq[ch]);
        }
    }
}

int main() {
    char str[100];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printCharacterFrequency(str);

    return 0;
}
