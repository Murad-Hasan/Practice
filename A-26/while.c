#include <stdio.h>
#include <stdbool.h>

// check total money 100 or not

int main (){
    int money = 0;
    int target = 100 ;

    while (money < target)
    {
        printf("Your total money is %d and you need to collect atleast 100 taka: ", money);
        printf("\nNeed More money inter Amount: ");
        int given;
        scanf("%d", &given);
        money += given;
        printf("Current money = %d\n", money);
    }
}

// number sum

int main () {
    int x;
    scanf("%d", &x);
    int sum = 0;

    while (x > 0)
    {
        int digit = x%10; // for find last digit
        x/=10; //for delete last digit
        printf("digit = %d, x=%d\n ", digit , x);
        sum += digit;
    }
    printf("Digit sum = %d", sum);
}

//traverse number

int main () {
    int a;
    scanf("%d", &a);
    int Reversed = 0;

    while (a > 0)
    {
        int digit = a%10;
        a/=10; 
        Reversed = Reversed * 10 + digit;
    }
    printf("Digit Reversed = %d", Reversed);
}


//finding GCD


int main ()
{
    int x , y;
    scanf("%d %d", &x, &y);

    while (x !=0)
    {
        int rem = y%x;
        y = x;
        x = rem;
        printf("%d %d\n", x, y);
    }
    printf("gcd = %d\n", y);
}


// specific input (0 ,1) useing break statement 
int main (){
    while (true)
    {
        int input;
        scanf("%d", &input);
        if(input != 0 && input !=1){
            printf("Invalid.\n");
            break;
        }
        printf("Your Input is %d\n", input);
    }
    return 0;
}

// continue use in while 

int main (){
    int num = 1234;
    int sum = 0;

    while (num > 0)
    {
        int digit = num%10;
        num  /= 10;
        if (digit%2 == 0) continue; // 1,3
        sum += digit;
    }
    printf("%d", sum);
}