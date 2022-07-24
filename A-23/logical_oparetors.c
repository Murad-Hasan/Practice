#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

//isalpha, isupper, tolower build in function


/*-------------------------------AND operator -------------------------*/

// int main (void){
//     char letter = 0;
//     printf("Enter a uppercase letter:");
//     scanf("%c", &letter);
    
//     if (isalpha(letter) && isupper(letter))
//         printf("You entered an uppercase %c\n", tolower(letter));
//     else
//         printf("You did not entered an uppercase letter\n");
//         return 0;
    
// } 




/*-------------------------------OR operator -------------------------*/

//find vowel or consonant

// int main (void){
//     char c = 0;
//     printf("Enter a letter:");
//     scanf("%c", &c);

//     if (isalpha(c))
//     {
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')  //or operator
//             printf("You entered a vowel\n");
//         else
//             printf("You entered a consonant\n");
//     }
//     else
//         printf("You did not entered a letter\n");
// }




/*-------------------------------Ternary operator -------------------------*/


// int main(void){
//     const double unit_price = 3.50;  //unit price   
//     const double discount1 = 0.05;   // discount for more than 15  product
//     const double discount2 = 0.10;    // discount for more than 30  product
//     const double discount3 = 0.15;    // discount for more than 50  product
//     double total_price = 0.0;
//     int quality = 0;
//     printf("Enter the number of quality you want to buy:");
//     scanf("%d", &quality);
//     total_price = quality*unit_price* (1.0 - (quality > 50  ? discount3 : (quality > 20 ? discount2: (quality > 15 ? discount1 : 0.0))));
//     printf("The price for %d is $%.2f\n", quality, total_price);
//     return 0;
// }


 /* Dynamic string */
// int main(void){
//     int pets = 0;
//     printf("Enter your pet number:");
//     scanf("%d", &pets);
//     printf("You have %d pet%s.", pets, pets == 1 ? "" : "s");
// }


// problem 01

/* condition 
1. Graduates over 25 who studied chemistry and who didn’t graduate from Yale
2. Graduates from Yale who studied chemistry
3. Graduates from Harvard who studied economics and aren’t older than 28
4. Graduates from Yale who are over 25 and who didn’t study chemistry
5. Age at least 22 years old
*/

int main (void) {
    int age = 22 ;
    int collage = 0;
    int subject = 0;
    bool interview = false;

    printf("\nWhat collage? 1 for harvard, 2 for yale ,  3 for others:");
    scanf("%d", &collage);
    printf("\nWhat subject? 1 for chemistry, 2 for economics ,  3 for others:");
    scanf("%d", &subject);
    printf("\nWhat is your age? :");
    scanf("%d", &age);

    // if (age > 25 && subject == 1 && collage != 2)
    //     interview = true;
    // if(subject == 1 && collage == 2 && && age >= 22)
    //     interview = true;
    // if(collage == 1 && subject == 2 && (age < 28 && age >= 22))
    //     interview = true;
    // if(collage == 2 && age > 25 && subject != 1)
    //     interview = true;
    // if(interview)
    //     printf("call for interview\n");
    // else
    //     printf("Rejected\n");
    if ((age > 25 && subject == 1 && collage != 2) || (subject == 1 && collage == 2 && age >= 22) || (collage == 1 && subject == 2 && (age < 28 && age >= 22)) || (collage == 2 && age > 25 && subject != 1))
        printf("call for interview\n");
    else
        printf("Rejected\n");
        return 0;
    
}
