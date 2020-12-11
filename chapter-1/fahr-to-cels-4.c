#include <stdio.h>

float celsiusFromFahrenheit(float f);

main()
{
    float fahr;
    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%6.0f %6.1f\n", fahr, celsiusFromFahrenheit(fahr));
}

float celsiusFromFahrenheit(float fahr)
{
    float celsius;
    celsius = (5.0/9.0) * (fahr - 32.0);
    return celsius;
}