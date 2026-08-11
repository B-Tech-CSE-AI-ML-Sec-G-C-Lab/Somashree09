//C Program to Compare two strings without using string library function .

#include <stdio.h>

int compareStrings(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return 0;
        }

        i++;
    }

    return 1;
}

int main()
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    result = compareStrings(str1, str2);

    if(result == 1)
    {
        printf("Both strings are equal.");
    }
    else
    {
        printf("Strings are not equal.");
    }

    return 0;
}