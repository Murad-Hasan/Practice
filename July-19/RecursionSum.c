#include <stdio.h>

int sum_function ( int n) {
    if ( n == 0)
        return 0 ;
    else
        return n + sum_function( n -1 );
}

int main () {
    int n ;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of n numbers: %d", sum_function(n));
    return 0;
}