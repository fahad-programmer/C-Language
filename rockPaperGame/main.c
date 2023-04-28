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

    char* user_choice = NULL;
    size_t len_user_choice;
    char* computer_choice;

    computer_choice = choices[random_index];

    printf("Welcome To The Rock Paper Scissors Game: \n");
    printf("Choose A Value From The 3 Options Rock, Paper Or Scissors \n");

    //Dynamically allocation of memory
    getline(&user_choice, &len_user_choice, stdin);

    printf("The User Choice Is %s And Computer Choice Is %s", user_choice, computer_choice);

    
    return 0;
}