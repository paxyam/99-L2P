//pg 31
//2nd version of copy input to output
#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
    return 0;
}
/*
the while will assign a character to "c" and test if it was EOF or not
if not, the body will of 'while' is executed, and will keep executing until
the end is reached.
when 'while' terminates, 'main' terminates.
the central idea of this program is that.
'getchar' can be used to shrink the program
impenetrable code isnt always most desired, you can program every aspect
but doing so leads to user error, and bugs

c = getchar() ! = EOF

is equivalent to

c = (getchar () ! = EOF)
doing so creates the undesired effect of setting c to either 1, or 0.
depending on the 'getchar' call
*/