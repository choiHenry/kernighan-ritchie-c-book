int remove(char s[])
{
    int i;
    i = 0;
    while (s[i] != '\n')
        ++i;
    --i;
    if (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    
    if (i >= 0) {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}