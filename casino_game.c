#include <stdio.h>

#include <stdlib.h>

#include <string.h>



void login() {

    char username[50], password[50];

    char existingUsername[50] = "user123"; // Example existing user

    char existingPassword[50] = "pass123"; // Example existing password



    printf("Are you a new user or an existing user? (new/existing): ");

    char userType[10];

    scanf("%s", userType);



    if (strcmp(userType, "new") == 0) {

        printf("Create a username: ");

        scanf("%s", username);

        printf("Create a password: ");

        scanf("%s", password);

        printf("Account created successfully! Please log in.\n");

    } else if (strcmp(userType, "existing") == 0) {

        printf("Enter your username: ");

        scanf("%s", username);

        printf("Enter your password: ");

        scanf("%s", password);



        if (strcmp(username, existingUsername) == 0 && strcmp(password, existingPassword) == 0) {

            printf("Login successful! Welcome back, %s.\n", username);

        } else {

            printf("Invalid username or password. Please try again.\n");

            exit(1);

        }

    } else {

        printf("Invalid input. Please restart the program.\n");

        exit(1);

    }

}

int main()

{

    //introduction to the game





    login();

    rules();

    printf("Welcome to the game!\n");



 -112,4 +112,4

    printf("Your new deposit amount is: %d\n", deposit);



    return 0;


}


}
