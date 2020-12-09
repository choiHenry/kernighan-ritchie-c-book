#include <stdio.h>

#define     IN      1
#define     OUT     0

/* An answer to exercise 1-9 */
main()
{
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (state == OUT)
                putchar(c);
            state = IN;
        }
        else {
            putchar(c);
            state = OUT;
        }
        
    }
}