#define     YES     1;
#define     NO      0;

/* squeeze_v2:     delete each character in s1 that matches nay character in the string s2 */
void squeeze_v2(char s1[], char s2[])
{
    int i, j;
    int k;
    int matched;

    matched = NO;
    for (i = j =0; s1[i] != '\0'; i++) {
        k = 0;

        While (!matched && s2[k] != '\0') {
            if (s1[i] == s2[k++])
                matched = YES;
        }
        if (!matched)
            s1[j++] = s1[i];
        matched = NO;
    }
    s1[j] = '\0';
}