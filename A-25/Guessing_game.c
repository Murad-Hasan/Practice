#include <stdio.h>

int main (void){
    int chosen = 19;
    int guess = 0;
    
    printf("\nThis is guessing game.");
    printf("\nI have chosen a number between 1 and 20 which you must guess.\n");
    for (int count = 3 ; count > 0 ; --count)
    {
        printf("\nYou have %d tr%s left.", count, count == 1 ? "y": "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        if (guess == chosen)
        {
            printf("Congratulations! You guessed it!\n");
            return 0;
        }
        else if(guess < 1 || guess > 20)
            printf("I  said the number is between 1 and 20'\n");
        else
            printf("Sorry , %d is wrong. My number is %s than that." , guess, chosen > guess? "greater" : "less");
        
    }
    printf("\nYou have had three tries and failed. The number was %d.\n", chosen);
    return 0;
}
