#include <stdio.h>

int main () {
    // Ascending Array 
    int a [5] , i , j , temp ;
    printf("Enter array Elements: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 5; i++) // i = 0
    {
        for ( j = i + 1; j < 5; j++) // j = 1
        {
            if (a[i] > a[j]) // for Descending order just change the login (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    printf("Array Element: ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    
    return 0;
}
