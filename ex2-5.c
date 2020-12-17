#define     YES     1
#define     NO      0

/* any:     returns the first location in string s1 where any character from the string s2 occurs */
int any(char s1[], char s2[])
{
    int found;
    int i, j;

    found = NO;
    i = 0;
    while (!found && s1[i] != '\0') {
        for (j = 0; !found && s2[j] != '\0'; j++)
            if (s1[i] == s2[j])
                found = YES;
        i++;
    }
    if (found)  
        return i-1;
    else
        return -1;
}