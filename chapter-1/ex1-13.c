#include <stdio.h>

#define     IN      1
#define     OUT     0

main()
{
    int c, l, lw[20], state;
    l = 0;
    state = OUT;

    for (int i = 0; i < 10; i++)
        lw[i] = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                ++lw[l];
                l = 0;
                state = OUT;
            }
        }
        else {
            ++l;
            state = IN;
        }
    }
    for (int i = 1; i < 20; i++) {
        printf("%3d | ", i);
        for (int j = 0; j < lw[i]; j++)
            printf("-");
        printf("\n");
    }
}