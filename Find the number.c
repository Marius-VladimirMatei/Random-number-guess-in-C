#include <stdio.h>
#include <stdlib.h> // needed for random generator
#include <time.h>   // needed for seed rand (without the timestamp the random generated number will be always the same

int main() {
    int random_number;
    int user_guess;
    int attempts = 0;
    int choice;

    printf_s("Guess the correct number!");

        //Ask the user for level choice 
    printf_s("Which interval do you want to play: \n");
    printf_s("1. 1-100?\n");
    printf_s("2. 100-1000?\n");
    printf_s("3. 1000-10000?\n");
    printf_s("Enter your choice (1, 3 or 3): ");
    scanf_s("%d", &choice);

   

               // ------------------------------------------ // 1-100 ------------------------------------------

    if (choice == 1) {
        
        // Random number generator
        srand(time(0)); // defines the current timestamp seed that changes every second
        random_number = rand() % 100 + 1;  // Random number between 1 and 100  (0+1 => 100); 100 defines the the integer interval


       
        printf_s("I have thought of a number between 1 and 100. Try to guess it!\n");

        // Loop until the user guesses the correct number
        // User input and read
        do {
            printf_s("Enter your guess: ");
            scanf_s("%d", &user_guess);
            attempts++;

            if (user_guess < random_number) {
                printf_s("The number is bigger!\n");
            }
            else if (user_guess > random_number) {
                printf_s("The number is smaller!\n");
            }
            else {
                printf_s("Congratulations! You guessed the number in %d attempts.\n", attempts);
            }
        } while (user_guess != random_number);

        return 0;


    }

                 // ------------------------------------------ // 100-1000 ------------------------------------------

    else if (choice == 2) {

        // Random number generator
        srand(time(0));
        random_number = rand() % 1000 + 100;  // Random number between 100 and 1000  (0+100 => 1000); 1000 defines the the integer interval

        printf_s("I have thought of a number between 100 and 1000. Try to guess it!\n");

        // Loop until the user guesses the correct number
        // User input and read

        do {
            printf_s("Enter your guess: ");
            scanf_s("%d", &user_guess);
            attempts++;

            if (user_guess < random_number) {
                printf_s("The number is bigger!\n");
            }
            else if (user_guess > random_number) {
                printf_s("The number is smaller!\n");
            }
            else {
                printf_s("Congratulations! You guessed the number in %d attempts.\n", attempts);
            }
        } while (user_guess != random_number);

        return 0;
    }

                  // ------------------------------------------ // 1000-10000 ------------------------------------------


    else if (choice == 3) {


        // Random number generator
        srand(time(0));
        random_number = rand() % 10000 + 1000;  // Random number between 1000 and 10000  (0+1000 => 10000); 10000 defines the the integer interval

        printf_s("I have thought of a number between 1000 and 10000. Try to guess it!\n");

        // Loop until the user guesses the correct number
        // User input and read

        do {
            printf_s("Enter your guess: ");
            scanf_s("%d", &user_guess);
            attempts++;

            if (user_guess < random_number) {
                printf_s("The number is bigger!\n");
            }
            else if (user_guess > random_number) {
                printf_s("The number is smaller!\n");
            }
            else {
                printf_s("Congratulations! You guessed the number in %d attempts.\n", attempts);
            }
        } while (user_guess != random_number);

        return 0;
    }


    else {
        printf_s("Invalid choice!");
    }
    return 0;
    

    
}