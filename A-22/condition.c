#include <stdio.h>
#include <stdbool.h>
// #include <limits.h>        //for LONG_MAX

// int main(void){
//     // number is even (check half of the number is also even or not) or odd
//     long test = 0L;
//     printf("Enter the integer number less then %ld:", LONG_MAX);
//     scanf("%ld", &test);
//     if (test%2L == 0L)
//     {
//         printf("The number %ld is even", test);
//         //now check wether half the number is also even
//         if ((test/2L)%2L == 0L)
//         {
//             printf("\nHalf of %ld is also even", test);
//             printf("\nThat's interesting isn't it?");
//         }else((test/2L)%2L != 0L);
//         {
//             printf("\nHalf of %ld is also odd", test);
//         }
        
        
//     }
//     else{
//         printf("The number %ld is odd\n", test);
//     }
//     return 0;
// }



// Converting Uppercase to lower case

// int main (void){
//     char letter = 0;

//     printf("Enter the uppercase letter:");
//     scanf("%c", &letter);

//     //check weather input is input is upper case
//     /*if you give G , g's value is 71
//     so, letter = 71 - 65 + 97 = 103 
//     g = 103
//     ref: http://sticksandstones.kstrom.com/appen.html
//     */
//     if (letter >= 'A' && letter <= 'Z')
//     {
//         letter = letter - 'A' + 'a'; 
//         printf("You entered an uppercase %c\n", letter);
//     }else{
//         printf("Try using the shift key! I want a capital letter.\n");
//     }
//     return 0 ;
// }

// another specific version of shorting Upper Case and lower case

int main (void) {
    char letter = 0;
    printf("Enter the Uppercase Letter:");
    scanf("%c", &letter);

    if (letter >= 'A')
    {
        if (letter <= 'Z')
        {
            letter = letter - 'A' + 'a';
            printf("Your entered an uppercase %c\n", letter);
        }else{
            if (letter >= 'a')
            {
                if (letter <= 'z')
                {
                    printf("Try using the shift key! I want a capital letter.\n");
                }else{
                    printf("you don't enter any letter\n");
                }
                
            }
            
        }
        
    }
    else{
        printf("you don't enter any letter\n");
    }
    
}



//guess you are teenager or not and also rich
int main (void){
    
    int age, savings;
    scanf("%d %d", &age, &savings);
    bool over_12 = age > 12;
    bool under_20 = age < 20;
    bool age_check = over_12 && under_20;
    bool savings_check = savings > 5000;
    if (age_check)
    {
        
        if (savings_check)
            {
                    printf("You are teeanager and also rich");
            }else{
        printf("You are teenager But not rich\n");
    }
    
    }
    else{
        if (savings_check)
        {
            printf ("your are not a teenager but rich");
        }else{
            printf ("your are not a teenager and also rich");
        }
    }
}