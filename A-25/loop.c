#include <stdio.h>
#include <ctype.h>

//diagram with loop

int main () {
    printf("\n************");
    for (int count = 1; count <= 8; count++)
        printf("\n*          *");
    printf("\n************\n");
    return 0;
}

// //loop with two variable
int main () {
    for (int i = 1, j =2 ; i <= 5 ; i++, j = j+2)
        printf("%d * %d =  %d\n", i , j , i*j);
}

//prefix and postfix
int main (){
    int a = 5, A =5, b= 5, x, y;
    x = a++ + b; //First execution then increase
    y = ++A + b; //first increase then execution
    printf("Value of x is %d & value of y is %d", x ,y);
}

//summing number

int main (){
    unsigned long long sum = 0LL;
    unsigned int count = 0;
    printf("\nEnter the number of integer you want to sum: ");
    scanf(" %u", &count);
    for (unsigned int i = 1; i <= count; ++i)
        sum+=i;
    printf("\nTotal of the first %u numbers is %llu\n", count, sum);
    return 0;
}

// A minimal for loop
int main (){
    char answer = 'N';
    double total = 0.0;
    double value = 0.0;
    unsigned int count = 0;

    printf("\nThis is program calculates the avarage of any number of values");
    for( ;; )
    {
        printf("\nEnter a value: ");
        scanf(" %lf", &value);
        total += value;
        ++count;

        printf("Do you want to enter anthor value? (Y OR N): ");
        scanf(" %c", &answer);
        
        if (tolower(answer) == 'n')
            break;

    }
    printf("\nThe Average is %.2lf\n", total/count);
    return 0;
}

//find GCD With for loop
int main (void) {
    int a , b;
    scanf("%d %d", &a, &b);

    int gcd = 1 ;
    for (int g = 1; g <= a && g <=b; g++)
    {
        if (a%g == 0 && b%g == 0)
            gcd = g;
    }
    printf("%d\n", gcd);
}

// find these type of number this is not divided by 3 and show the multiple pf those number;

int main () {
    for (int i = 1; i <= 10; i++)
    {
      if(i%3 == 0) continue;
        printf("%d  -----> ", i);

      for (int j = 1; j <= 10; j++)
      {
          printf("%d ", i*j);
      }
      printf("\n");
    }
}