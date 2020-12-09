#include <stdio.h>

/* coppy input to output; 1st version */
main()
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
