#include <stdio.h>
#include <ctype.h>
// Lotary winner check

int main (void) {
    int ticket_number = 0;
    printf("Enter your ticket number : ");
    scanf("%d", &ticket_number);

    switch (ticket_number)
    {
    case 35:
        printf("congratulations ! you won first prize");
        break;
    case 122:
        printf("congratulations ! you won second prize");
        break;
    case 78:
        printf("congratulations ! you won third prize");
        break;
    default:
        printf("Too bad, you lose; Best luck for next time.");
        break;
    }
}


// //picking a lucky number 

int main (void) {
    int choice = 0;

    printf("pick a number between 1 to 10 and you may win a prize ! :");
    scanf("%d", &choice);

    if ((choice > 10) || (choice < 1))
        choice = 11;

    switch (choice)
    {
    case 7:
        printf("congratulations!\n");
        printf("you win a television");
        break;
    case 2:
        printf("congratulations!\n");
        printf("you win a Mobile Phone");
        break;
    case 8:
        printf("congratulations!\n");
        printf("you win a aspirin table");
        break;
    case 11:
        printf("Try between 1 and 10 . You wasted your guess.\n");

        //No break - so continue with the next statement
    
    default:
        printf("sorry , you loss.\n");
        break;
    }
    return 0;
}







// //response Yes or No

int main (void) {
    char answer = 0;

    printf("Enter Y or N: ");
    scanf("%c", &answer);

    switch (toupper(answer))   // if user enter lowercase it convert uppercase
    {
    case 'Y':
        printf("You responded in the affirmative.\n");
        break;
    case 'N':
        printf("You responded in the negative.\n");
        break;
    
    default:
        printf("You did not respond correctly ......\n");
        break;
    }
}


// calculation with switch

int main (void) {
    double number_1 = 0.0;
    double number_2 = 0.0;
    char operation = 0;

    printf("Enter the calculation: ");
    scanf("%lf %c %lf", &number_1 , &operation , &number_2);

    switch (operation)
    {
    case '+':
        printf("= %lf\n" , number_1 + number_2);
        break;
    case '-':
        printf("= %lf\n" , number_1 - number_2);
        break;
    case '*':
        printf("= %lf\n" , number_1 * number_2);
        break;
    case '/':
    if (number_2 == 0)
    {
        printf("\n\n\aDivision by zero error!\n");
    }else{
        printf("= %lf\n" , number_1 / number_2);
    }
        break;
    case '%':
    if ((long)number_2 == 0)
    {
        printf("\n\n\aDivision by zero error!\n");
    }else{
        printf("= %ld\n" , (long)number_1 % (long)number_2);
    }
        break;
    
    default:
    printf("\n\n\aIllegal Operation");
        break;
    }
}