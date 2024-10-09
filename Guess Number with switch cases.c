#include <stdio.h>
#include <stdlib.h> // needed for random generator
#include <time.h>   // needed for seed rand (without the timestamp the random generated number will be always the same

int main() {
	int random_number;
	int user_guess;
	int attempts = 0;
	int choice;
	int min;
	int max;

	// Ask the user for level choice 
	printf_s("Which interval do you want to play: \n");
	printf_s("1. 1-100?\n");
	printf_s("2. 100-1000?\n");
	printf_s("3. 1000-10000?\n");
	printf_s("Enter your choice (1, 3 or 3): ");
	scanf_s("%d", &choice);

	// Define the switch cases (instead of many if - else statements)

	switch (choice) {

	case 1:
		min = 0;
		max = 100;
		break;

	case 2:
		min = 100;
		max = 1000;
		break;

	case 3:
		min = 1000;
		max = 10000;
		break;

	default:		// in case of user invalid input
		printf_s("Invalid choice!\n");
		return 1;		// returns an error
	}

	// Random number genertator
	srand(time(0)); // defines the current timestamp seed that changes every second
	random_number = rand() % (max - min + 1) + min;	// Random number between min and max  (from 0 + min up to => max); max number defines the the integer interval

	printf_s("I have a number between %d and %d. Try to guess it!\n", min, max);

	// Loop until the user finds the correct number

	do {
		printf_s("Enter your number: \n");
		scanf_s("%d", &user_guess);
		attempts++;

		if (user_guess < min || user_guess > max) {
			printf_s("Your number is out of the range!\n");
		}

		else if (user_guess < random_number) {
			printf_s("The number is bigger! Try again.\n");
		}

		else if (user_guess > random_number) {
			printf_s("The number is smaller! Try again.\n");
		}

		else {
			printf_s("That is the number! You guessed it in %d attempts.\n", attempts);
		}

	}

	while (user_guess != random_number);

	return 0;

}