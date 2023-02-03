/*

#include <stdio.h>

main()
{
    printf("hello, world! \n");
    return 0;
}

||||||||||
2023.01-01
#include                libraries to be used, entered at the beginning of code
                        one library is <stdio.h>

main() or               Declares the main block of code
int main()              
{
                        Enclose code in between curly braces, code never reads spaces except which between user input.
                        same for enter.
}

return 0;               returning 0 means that the code ran from start to end successfully,
;                       ends the line, isnt always used and doesnt always mean end the line

//                      comment that appears somewhere in the middle of code, it can be in the middle of a line
/*                      this is multi line, ends until the star forward slash ends
*/                   

/*
int x;                      declaration
x = 123                     initialization
int y = 333                 delaration + initialization

printf("words");            Output words or text
printf("%d");               % would be a format specifier
printf("%d"z);              on the z, we would include specifically what the declared integer or float was
printf("%s"z);              with the %s we are now using a string
%c                          c for character
%f                          f for float
\n                          begins a new text line
\t                          tabs over, more of a visual and literal tool than a programming tool
\" (same for  \' )          quotes can be inserted into text

||||||||||
2023.01-02 a
int x = 30;                  Integer LOWEST memory usage is 2              
short x = 30;                2 bytes of LOWEST memory(-32,767 to +32768) &d
unsigned short x = 30;       2 bytes (0 to 65,565) &d

int x = 1000000000;          4 bytes of memery(-2,147,483,647 to +2,147,483,648) %d
unsigned int x= 100000;      unsigned is also (0 to +4,294,967,295) %u

long long int x = ;          the reason why we use double long, is because int is already long, its 4 bytes, long long is 8 bytes
                             (-9 quintillion to +9 quintillion) %lld
unsigned long long int       (0 to +18 quintillion) %llu
                             if you wish to make long long int longer you can throw a "u" at the end of the number


float x = 2.33;              Floating point number -  to represent a decimaled number  
                             4 bytes (32 bits of precision 6-7 digits)   %f  
double x = 3;                8 bytes (64 bits of precision 15-16 digits) %lf


bool e = true;               1 byte, (t or f) %d 1 responses true; 2 responses false
                             <stdbool.h> library

char x = 'd';                Single character  1 byte of memory
                             char stores an integer between -128, to +127, %d or %c
unsigned char x = 'd';       an unsigned char (+/-) is from 0 to 255, again %d or %c
                             to go from %d to %c, we use ascii, the number, makes the corresponding character
char x[] = "brody";          Array of characters

||||||||||
2023.01-02 b

%c      = character
%s      = string (array of characters)
%f      = float
%lf     = double
%d      = integer

%.1     = decimal precision
%2      = minimum field width
%-      = left align

example code
{
    float item1 = 5.75
    float item2 = 10.01
    float item3 = 100.303

    printf("candy cost: $%.2f\n", item1); this will display the float plus 2 decimals points further
    printf("pizza cost: $%8.2f\n", item2); having the beginning integer makes it right align, and secondly 
    printf("gas cost: $%-8.2f\n", item3); now the code is aligning to the left
}


*/
