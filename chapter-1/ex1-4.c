#include <stdio.h>

/* An answer to execise 1.4 */

main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;              /* lower limit of temperature table */
    upper = 300;            /* upper limit */
    step = 20;              /* step size */

    celsius = lower;

    printf("Celsius-Fahrenheit Table\n\n");
    while (celsius <= upper) {
        fahr =  (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}