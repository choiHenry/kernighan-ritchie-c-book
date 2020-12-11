#include <stdio.h>

#define    TABINC  8
#define    IN      1
#define    OUT     0

int main()
{
    int c, pos, nb, nt, tabstop, state;

    nb = 0;
    nt = 0;
    pos = 1;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++nb;
            while ((c = getchar()) != ' ')
                ++nb;
            tabstop = TABINC - (pos - 1) % TABINC;
            while (nb >= tabstop) {
                putchar('\t');
                nb -= tabstop;
                tabstop = TABINC;
            }
            while (nb > 0) {
                putchar(' ');
                ++pos;
            }
        } else if (c == '\n' || c == '\t') {
            putchar(c);
            pos = 1;
        } else {
            puthcar(c);
            ++pos;
        }
    }
}