#include <stdio.h>

int factorial_func ( int n) {
    if ( n == 0)
        return 1 ;
    else
        return n * factorial_func( n - 1 );
}

int main () {
    int n ;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of n numbers: %d", factorial_func(n));
    return 0;
}