#include <stdio.h>

void check_prime (int num);

int main () {
    int a;
    printf("Inter Number: ");
    scanf("%d" , &a);
    check_prime(a);
    return 0;
}

void check_prime (int num) {
    int i , count = 0 ;
    for ( i = 2; i < num; i++)
        if (num%i == 0){
            count ++ ;
            break;
        }
    if ( count == 0 && num != 1)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number" , num);
}
