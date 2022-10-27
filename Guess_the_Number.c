/* we will write a program that generates a random number and ask the player to guess it . if the player guess is higher than the actual number the programdisplays "LOWER NUMBER PLEASE". similarly if the user guess is low , the program prints "HIGHER  NUMBER PLEASE"
when the user guess the correct number ,the program displays the number of guesses the player used to arrive at the number*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // generates a random number between 1 and 100
    printf("the random number is %d", number);
    do
    {
        printf("\nguess the number");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number pleasw\n");
        }
        else if (guess < number)
        {
            printf("higher number please");
        }
        else
        {
            printf("you guss in %d attemps", nguesses);
        }
        nguesses += 1;
    } while (guess != number);

    return 0;
}