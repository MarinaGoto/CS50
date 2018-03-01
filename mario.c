#include <cs50.h>
#include <stdio.h>

int main (void)

{
    //validate input given by the user
    int n;
    do
    {
        printf ("What is the height of the pyramid you would like to be: ");
        n = get_int();
    }
    while (n < 0 || n > 23);

    //make the pattern (шаблон)
    for (int i=0; i < n; i++)
    {
        //print spaces and print hatches, based on i and j I print # or " "
        for (int j=0; j <= n; j++)
        {
            if (i + j < (n - 1))
            printf (" ");
            else
            printf ("#");
        }
    //now the single line is compled I need a new line
    printf ("\n");
    }
}
