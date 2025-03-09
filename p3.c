//WAP to input user id and password. Show the password character as $. Match the user id as drbpsharma and password as 123456. If authentication passed print "Welcome to Secure System" else print "Authentication Failed"
#include <stdio.h>
#include <string.h>

int main() {
    char userID[20], password[20], ch;
    int i = 0;

    const char correctUserID[] = "Alisha";
    const char correctPassword[] = "123456";

    
    printf("Enter User ID: ");
    scanf("%s", userID);

    printf("Enter Password: ");
    while (1) {
        ch = getch();  
        if (ch == 13) 
            break;
        printf("$");  
        password[i] = ch;
        i++;
    }
    password[i] = '\0'; 

    if (strcmp(userID, correctUserID) == 0 && strcmp(password, correctPassword) == 0) {
        printf("\nWelcome to Secure System\n");
    } else {
        printf("\nAuthentication Failed\n");
    }

    return 0;
}

