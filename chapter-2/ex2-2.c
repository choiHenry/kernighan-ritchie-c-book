enum loop { NO, YES };
enum loop okloop = YES;
/*

// In both of the below cases, "day" is 
// defined as the variable of type week. 

enum week{Mon, Tue, Wed};
enum week day;

// Or

enum week{Mon, Tue, Wed}day;

*/
ㄴ
i = 0;
while (okloop == YES) {
    if (i > lim - 1)
        okloop = NO;
    else if ((c=getchar()) == '\n')
        okloop = NO;
    else if (c == EOF)
        okloop = NO;
    else {
        s[i] = c;
        ++i;
    }
}