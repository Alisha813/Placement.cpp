//Write a C program that takes a password as input and checks if it meets the following criteria:
At least 8 characters long
Contains at least one uppercase letter
Contains at least one lowercase letter
Contains at least one digit

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isValidPassword(char password[]) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0;
	int i;
    if (length < 8) {
        return 0; 
    }

    for (i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        } else if (islower(password[i])) {
            hasLower = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        }
    }

    return hasUpper && hasLower && hasDigit;
}

int main() {
    char password[100];
    printf("Enter a password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; 
    
    if (isValidPassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid. It must:\n");
        printf("- Be at least 8 characters long.\n");
        printf("- Contain at least one uppercase letter.\n");
        printf("- Contain at least one lowercase letter.\n");
        printf("- Contain at least one digit.\n");
    }

    return 0;
}
