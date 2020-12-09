#include <stdio.h>

/* coppy input to output; 2st version */
main()
{
    int c;
    while ((c = getchar()) != EOF) {
        c = getchar();
    }
}
