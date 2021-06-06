#include <stdio.h>

void copyString(char *to, char *from)
{
    while (*from) // the null character is equal to value 0
        *to++ = *from++;

    *to = '\0';
}

int main(void)
{
    char string1[] = "A string to be copied.";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);
}