// #define "name" "replacement"
// thus any name that is in the replacement text will then be referred to as the name text
// this is not limited to numbers

#include <stdio.h>

#define LOWER 0 /*lower limit of table */
#define UPPER 300 /*upper limit*/
#define STEP 20 /*step size*/

/* print fahrenheit celsius table*/
int main ()
{
    int FAHR;
    for (FAHR = LOWER; FAHR <= UPPER; FAHR = FAHR + STEP)
        printf("%3d %6.1f\n", FAHR, (5.0/9.0)*(FAHR-32));
    return 0;
}

//UPPER, LOWER, and STEP are symbolic constants, not vairables, so they do not appear
//in declarations. Symbolic constants tend to be written in upper case for readability
//there is no line at the end of each define line
