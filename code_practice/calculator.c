

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Prompt user for operator
    string op = get_string("operator: ");

    // Perform operation
    if ( strcmp(op, "+") == 0)
    {
        printf("%i %s %i = %i\n", x, op, y, x + y);
    }
 
    else if ( strcmp(op, "-") == 0)
    {
        printf("%i %s %i = %i\n", x, op, y, x - y);
    }

    else if ( strcmp(op, "*") == 0)
    {
        printf("%i %s %i = %i\n", x, op, y, x * y);
    }
    else if ( strcmp(op, "/") == 0)
    {
        printf("%i %s %i = %f\n", x, op, y, (float)x / y);
    }
    else
    {
        printf("wrong operator!");
    }    
}