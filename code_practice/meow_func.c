// diy a function meow() to perform the action.
// we can compare this c code to the version of Python code.
#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
    int n = get_int("How much times do you want to meow?\n");
    meow(n);
}

// Meow some number of times
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}