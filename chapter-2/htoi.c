/* hoti: converts a string of hexadecimal digits into its eqeuivalent integer value */

int htoi(char hexa[])
{
    int n;
    int i;

    i = 0;
    if (hexa[i] == '0') {
        ++i;
        if (hexa[i+1] == 'x' || hexa[i+1] == 'X')
            ++i;
    }
    n = 0;
    for (; s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'f' || s[i] >= 'A' && s[i] <= 'F'; i++)
        if (s[i] >= '0' && s[i] <= '9')
            n = 16 * n + (s[i] - '0');
        else if (s[i] >= 'a' && s[i] <= 'f')
            n = 16 * n + (s[i] + 10 - 'a');
        else
            n = 16 * n + (s[i] + 10 - 'A');
    return n;
}