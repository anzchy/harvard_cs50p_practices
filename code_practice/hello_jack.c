// hello_jack.c
// to run the c code, you need to prebuild make file 
// that link lncs50.library to C compilers.
// to run hello_jack.c, first insert in the terminal "make hello_jack"
// after successfully compiling, then insert "./hello_jack", no space in . and /
#include <stdio.h>
#include <cs50.h>

int main(void)
{

    string name = get_string("What's your name?\n");
    printf("Hello, %s\n", name);
    
}