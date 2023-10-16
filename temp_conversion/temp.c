#include <stdio.h>

/* print Fagrenheit-Celsius Table
  for fahr = 0, 10, ..., 300; floating point version */


/*
print as ...
 
 * %d       decimal integer
 
 * %6d      decimal integer, at least 6 characters wide
 
 * %f       floating point
 
 * %6f      floating point, at least 6 characters wide
 
 * %.2f     floating point, 2 characters after decimal point
 
 * %6.2f    floating point, at least 6 characters wide and 
                            2 after the decimal point 
*/

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */
#define MAX_SIZE 4 /* array size for userinput array */

int fahr_to_cels_converter(int fahr);

/* print Fahrenheit-Celsius table */
int main(){ 
    int fahr;
    int c, result;
    int i = 0;
    char userinput[MAX_SIZE];    

    printf("Farh  Cels\n");
    printf("----------\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    
    while((c = getchar()) != '\n' && i < MAX_SIZE - 1){
        userinput[i++] = c;
    }
    userinput[i] = '\0'; // Null terminate string
    sscanf(userinput, "%d", &c); //Convert string to integer

    result = fahr_to_cels_converter(c);
    printf("Result: %4d\n", result);

    return 0;
}

/* Fahrenheit to Celsius Converter - takes an int as Ferh and returns
   the equivalent in Celsius, also an int */
int fahr_to_cels_converter(int fahr){
    return (5.0/9.0) * (fahr-32);
}
