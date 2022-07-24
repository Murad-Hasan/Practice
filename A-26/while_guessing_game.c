#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void) {
    srand(time(0));
    int hidden = rand()%100 + 1;
    printf("I guess a number for you. You need to guess it. Good Luck!\n");
    printf("\nYou Have Only 10 chance.\n");

    int number_of_guesses = 0 ;

    while (number_of_guesses < 10)
    {
        int guess;
        printf("\nEnter Your Guessing Number: ");
        scanf("%d", &guess);

    if(guess == hidden) {
        printf("\nYou are right.");
        break;
    }
    else if ( guess > hidden){
        printf("\n-------------------Guess smaller----------------\n");
    }
    else{
        printf("\n-----------------Guess larger------------------\n");
    }
    number_of_guesses++ ;
    printf("\nYou have %d time%s left for guessing the number.\n", ( 10 - number_of_guesses), ( 10 - number_of_guesses) == 1 ? "" : "s");
    }
    if (number_of_guesses == 10)
    {
        printf("You failed.");
    }
    
}