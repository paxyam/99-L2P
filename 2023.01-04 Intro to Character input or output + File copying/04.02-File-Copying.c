//pg30
/*
using the previous lesson of 'getchar' and 'putchar'
you can write much without knowwing much about i/o

#include <stdio.h>
main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

'!' means not equal to
char usually leads to storing data
the solution for 'getchar' returns when there is no more input
this value is called 'EOF' - end of file
 we must declare 'c' to be a type big enough to hold any value that 'getchar' returns
normally the program will not be able to tell when the end is, as of course
the end is where end is listed.
*/