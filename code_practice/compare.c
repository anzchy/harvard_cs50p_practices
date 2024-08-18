// this is a program to use funcitons and int data types.
// we compare two intergers that user input and compare two numbers.
// make sure to include cs50.h, as get_int is not defined in stdio.h.

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int x = get_int("What's x?");
    int y = get_int("What's y?");

    if (x < y)
    {
        printf("x is smaller than y.\n");
    }
    else if (x > y)
    {
        printf("x is bigger than y.\n");
    }
    else
    {
        printf("x is equal to y.\n");
    }
}