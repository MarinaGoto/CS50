/*
Умный подсчет расхода воды
*/

#include <cs50.h>
#include <stdio.h>

int main(void)

{
//number of bottles consumed per minute
    int count_bottles_for_minute = 12;

//requests the number of minutes spent in the shower of the user
    int minutes=0;
    do
    {
        printf ("Enter the number of minutes spent in the shower: ");
        minutes = get_int();
    }
    while (minutes < 0);

    printf ("Number of bottles consumed:%i\n", minutes * count_bottles_for_minute);
}