#include <stdio.h>
main()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

//didnt specify celsius, but we just knew what it was?
//the only specified integer (or term) was fahr.
//instead of while, for was used, again no ";" at the end of the for/while
//while appears to not work.
//semi colons do exist!, they are inside the line
//whats in parenthesis is whats in parenthesis, then defined by the comma,
//followed by what the formula is.

//(for) is a loop, a generalization of the while.
//because of the multiple parts (multiple ";" 's)
//fahr = 0; is the initialization for the loop
//fahr <= 300; this controls the loop, (ends it aswell)
//fahr = fahr +20 (the end line) because there is no ; thus it ends the command line

//for and while are arbitrary, one stands is
// for is appropriate for loops,
// while keeps the loop control statements together in one place
