#include <stdio.h>

int printInt (int n) {
    if (n == 101)
        return 0 ;
    printf("%d \n", n );
    printInt( n + 1 );
}

int main (){
    int i;
    printf("Enter The Number: ");
    scanf("%d", &i);
    printInt(i);
    return 0;
}

