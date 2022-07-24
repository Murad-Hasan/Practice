// 10k 35% interest rate 5 years
//total amount in 5 years
//total amount in per month

#include <stdio.h>

int main (){
    double loan_amount, interest_rate, number_of_years, total_amount, monthly_amount, total_amount_in_five_years;

    printf("Enter the loan amount: ");
    scanf("%lf", &loan_amount);
    printf("Enter the interst rate: ");
    scanf("%lf", &interest_rate);
    printf("Enter the number of years: ");
    scanf("%lf", &number_of_years);

    total_amount = loan_amount + loan_amount * interest_rate / 100;
    monthly_amount = total_amount / ( number_of_years * 12 );
    total_amount_in_five_years = loan_amount + loan_amount * interest_rate * 5 / 100;

    printf("Total Amount: %.2lf\n", total_amount);
    printf("Monthly Amount: %.2lf\n", monthly_amount);
    printf("Total Amount In five Years: %.2lf\n", total_amount_in_five_years);
    
}
