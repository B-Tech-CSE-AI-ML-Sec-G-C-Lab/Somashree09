#include <stdio.h>

int findLength(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    length = findLength(str);

    printf("Length of the string = %d", length);

    return 0;
}