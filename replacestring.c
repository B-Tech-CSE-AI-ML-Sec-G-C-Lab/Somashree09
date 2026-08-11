// C Program to Replace each lowercase letter with the same uppercase letter with the same uppercase letter
// of a given string.Return the newly created string.

#include <stdio.h>

void convertUppercase(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    convertUppercase(str);

    printf("Newly created string = %s", str);

    return 0;
}