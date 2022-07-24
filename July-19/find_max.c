#include <stdio.h>

// find max number
int max (int x , int y) {
    return (x > y) ? x : y; //ternary Operation
}

int main (void) {
    printf("Max is %d", max(18,12));
    return 0;
}


