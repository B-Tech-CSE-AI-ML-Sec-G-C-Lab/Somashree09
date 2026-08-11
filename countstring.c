// C Program to Count the total number of alphabets , digits and special characters in string.

#include <stdio.h>

void countCharacters(char str[], int *alphabets, int *digits, int *special)
{
    int i = 0;

    *alphabets = 0;
    *digits = 0;
    *special = 0;

    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            (*alphabets)++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            (*digits)++;
        }
        else
        {
            (*special)++;
        }

        i++;
    }
}

int main()
{
    char str[200];
    int alphabets, digits, special;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    countCharacters(str, &alphabets, &digits, &special);

    printf("Total Alphabets = %d\n", alphabets);
    printf("Total Digits = %d\n", digits);
    printf("Total Special Characters = %d\n", special);

    return 0;
}