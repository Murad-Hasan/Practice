#include <stdio.h>
#include <string.h>

//joining a string

int main (void) {
    char preamble[] = "The joke is:\n\n";
    char str[][100] = {
        "computers do what you tell them to do, not what you want them to do",
        "When you put somethings in memory, remember where you put it.",
        "Never test for a condition you don't know what to do with",
    };

    unsigned int strCount = sizeof(str)/sizeof(str[0]);
    printf("%d\n", strCount);


    //find the total length of all the strings in str
    unsigned int length = 0;
    for(unsigned int i = 0; i< strCount; ++i)
        length += strnlen_s(str[i], sizeof(str[i]));
    // printf("The total length of all the strings is %d characters.\n", length);


    //different between sizeof and strlen
    // char example[] = " This is a string that is too long to fit in the array. ";
    // int size = sizeof(example)/ sizeof(example[0]);
    // printf("%d\n", size); //prints out the number of characters in the string with the null character
    // int lth = strlen(example);
    // printf("%d\n", lth); //prints out the number of characters in the string without the null character


    //create array to hold all strings combined
    char joke [length + strnlen_s(preamble, sizeof(preamble)) + 1];

    //copy preamble to joke
    if(strncpy_s(joke, sizeof(joke), preamble, sizeof(preamble))){  //strncpy_s returns 0 if successful
        printf("Error copying preamble to joke.\n");
        return 1;
    }
    // else
    //     printf("preamble copied to joke.\n now it is:-\n %s\n", joke);

    //concatenate strings to joke
    for(unsigned int i = 0; i < strCount; ++i)
    {
        if (strncat_s(joke, sizeof(joke), str[i], sizeof(str[i]))){
            printf("Error concatenating string %d to joke.\n", i);
            return 2;
        }
    }
    printf("joke is:-\n %s\n", joke);
    return 0;
}