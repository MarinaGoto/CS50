#include <cs50.h>
#include <stdio.h>
#include <math.h>

int change (int number_cents);
int main (void)

{
//prompt user for an amount of change

    float change_input;
    do
    {
        printf ("How much change is owed? \n");
        change_input = get_float();
    }
    while ( change_input <0 );

//output. print the final number of coins
    printf ("%i\n",change ((int) round(change_input*100)));
}

//return: minimum number of change

int change (int number_cents)

//the only coins available are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢)
//!! modulo math %
//returns the remainder of division

    {
        return number_cents/25 + (number_cents%25)/10 + ((number_cents%25)%10)/5 + ((number_cents%25)%10)%5;
    }




