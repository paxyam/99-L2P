#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 5, 10, 100...  floating-point version */
main()
{
    printf("This is a header above the table, we will be going reverse, celsius to fahrenheit\n");
    
    float celsius, fahrenheit;
    float lower, upper, step;

    lower = 0.00;      /* lower limit of temperature table*/
    upper = 100.00;     /* upper limit*/
    step = 5.00; /* step size*/

    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (celsius *1.8) + 32;
        printf("%3.0f %4.2f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
}