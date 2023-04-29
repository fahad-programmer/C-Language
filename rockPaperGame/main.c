#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//So we will be creating a game rock paper scissors

int main() {

    char *choices[] = {"rock","paper", "scissors"};
    int number_of_choices = sizeof(choices) / sizeof(choices[0]);

    //Selecting random number
    // Choose a random element from the array
    srand(time(NULL));
    int random_index = rand() % number_of_choices;


    //User choice
    char* user_choice = NULL;
    size_t len_user_choice = 0;
    char* computer_choice;

    computer_choice = choices[random_index];

    printf("Welcome To The Rock Paper Scissors Game: \n");
    printf("Choose A Value From The 3 Options Rock, Paper Or Scissors \n");

    //Dynamically allocation of memory
    getline(&user_choice, &len_user_choice, stdin);

    //removing the /n line charcter from the string
    // Remove the newline character from user_choice
    char *newline_ptr = strchr(user_choice, '\n');
    if (newline_ptr != NULL) {
        *newline_ptr = '\0';
    }

    //Now we are have get the input and now we will check for conditions
    if (strcmp(user_choice, "rock") == 0 && strcmp(computer_choice, "rock") == 0) {
        printf("No one won same choices made");
    } else if (strcmp(user_choice, "rock") == 0 && strcmp(computer_choice, "paper") == 0) {
        printf("Computer Won because computer choosed %s", computer_choice);
    } else if (strcmp(user_choice, "rock") == 0 && strcmp(computer_choice, "scissors") == 0) {
        printf("User Won because computer choose %s", computer_choice);
    }

    if (strcmp(user_choice, "paper") == 0 && strcmp(computer_choice, "rock") == 0) {
        printf("User Won because computer choosed %s", computer_choice);
    } else if (strcmp(user_choice, "paper") == 0 && strcmp(computer_choice, "paper") == 0) {
        printf("No one won same choices made");
    } else if (strcmp(user_choice, "paper") == 0 && strcmp(computer_choice, "scissors") == 0) {
        printf("Computer Won because computer choosed %s", computer_choice);
    }

    if (strcmp(user_choice, "scissors") == 0 && strcmp(computer_choice, "rock") == 0) {
        printf("Computer Won because computer choosed %s", computer_choice);
    } else if (strcmp(user_choice, "scissors") == 0 && strcmp(computer_choice, "paper") == 0) {
        printf("User Won because computer choosed %s", computer_choice);
    } else if (strcmp(user_choice, "scissors") == 0 && strcmp(computer_choice, "scissors") == 0) {
        printf("No one won same choices made");
    }

    free(user_choice);
    
    return 0;
}
