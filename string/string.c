//finding out the length of a string

#include <stdio.h>

//array of strings

int char_outPut (){
    char saying [3] [32] = {
    "Hello",
    "World",
    "!"
};

for(unsigned int i = 0; i < sizeof(saying)/ sizeof(saying[0]); ++i)
    printf("%s\n", saying[i]);

}

int array_of_strings(){
    char str3[][70] = {
        "computers do what you tell them to do, not what you want them to do",
        "When you put somethings in memory, remember where you put it.",
        "Never test for a condition you don't know what to do with",
    };
    unsigned int count = 0;
    unsigned int strCount = sizeof(str3)/sizeof(str3[0]);
    printf("There are %u strings.\n", strCount);

    //find the lengths of the strings

    for (unsigned int i = 0; i < strCount; ++i)
    {
        count = 0;
        while (str3[i][count] != '\0')
        {
            ++count;
        }
        printf("The strings: \n   \"%s\"\n contains %u characters.\n", str3[i], count);
    }
    return 0;
}


int main(void){
    char str1 [] = "To be or not to be";
    char str2 [] = ",that is the question";
    unsigned int count = 0;

    while (str1[count] != '\0')
        ++count ;

    printf("The length of the string \"%s\" is %d characters. \n ", str1, count);

    count = 0 ;

    while (str2[count] != '\0')
        ++count;

    printf("The length of the string \"%s\" is %d characters. \n ", str2, count);
    // char_outPut();
    array_of_strings();
    return 0;
}


