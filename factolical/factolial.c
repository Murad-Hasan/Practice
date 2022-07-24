// Create a factorial function
#include <stdio.h>

long int factorial (int n) {
    int i;
    long int result = 1 ;
    if (n>1)
        for ( i = 2; i <= n; i++)
            result = result*i;
    return result;
}

int main (void) {
    int num ;
    printf("Input your number: ");
    scanf("%d", &num);
    printf("Factorial of %d is : %d " , num , factorial(num));
    return 0;
}

