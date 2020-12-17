
/* strcat:      concatenate t to the end of s; s must be big enough     */
void strcat(char s[], char t[])
{
    int i, j; /* i indicates the index of s, j indicates the index of t     */
    while (s[i] != '\0') /* find end of s       */
        i++;
    while ((s[i++] = t[j++]) != '\0')       /* copy t       */
        ;
}