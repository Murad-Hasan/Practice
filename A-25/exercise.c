#include <stdio.h>

//temperature converter 

int main () {
    
    int user_input = 0;
    printf("Select one method: 1 for celsius to fahrenheit ; 2 for fahrenheit to celsius: ");
    scanf("%d", &user_input);

    switch (user_input)
    {
    case 1:
        double temperature_in_celsius = 0;
        double covert_to_fahrenheit = 0;
        printf("Enter Celsius degree of temperature:");
        scanf("%lf", &temperature_in_celsius);
        covert_to_fahrenheit = temperature_in_celsius * 1.8 + 32 ;
        printf("Temperature in Fahrenheit is %.2f\n", covert_to_fahrenheit);
        break;
    case 2:
        double temperature_in_fahrenheit = 0;
        double covert_to_celsius = 0;
        printf("Enter fahrenheit degree of temperature:");
        scanf("%lf", &temperature_in_fahrenheit);
        covert_to_celsius = (temperature_in_fahrenheit - 32) * 5 / 9  ;
        printf("Temperature in Celsius is %.2f\n", covert_to_celsius);
        break;

    default:
        printf ("Please select from between 1 or 2.\n");
        break;
    }
}



//calculate product price

int main (void) {
    double unit_price = 5 ;
    int quantity = 0;
    double total_price = 0;
    double discount_1 = 0.10 ; //for more then 30 items
    double discount_2 = 0.15 ; //for more then 50 items

    printf("Enter how much product you want to buy:");
    scanf("%d", &quantity);
        total_price = unit_price*quantity  * ( 1.0 - (quantity > 50 ? discount_2 : ( quantity > 30 ? discount_1 : 0.0)));
    printf("Your total product is %d and total price is %.2lf", quantity , total_price);
    return 0 ;
}


// Display date 

int main (void) {
    int month = 0;
    int day = 0;
    int year = 0;
    printf("Enter the date as three integer values, separated by space(month day year):");
    scanf("%d %d %d", &month, &day, &year);

    if(day > 3 && day < 21 || day > 23 && day < 31)
        printf("\n%dth ", day);
    else
        printf("\n%d%s ", day, (day % 10 == 1 ? "st": (day % 10 ==2 ? "nd" : "rd")));

    switch(month)
  {
    case 1:
      printf("January ");
      break;
    case 2:
      printf("February ");
      break;
    case 3:
      printf("March ");
      break;
    case 4:
      printf("April ");
      break;
    case 5:
      printf("May");
      break;
    case 6:
      printf("June");
      break;
    case 7:
      printf("July");
      break;
    case 8:
      printf("August");
      break;
    case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    case 12:
      printf("December");
      break;
  }
  printf(" %d\n", year);
  return 0;
}
