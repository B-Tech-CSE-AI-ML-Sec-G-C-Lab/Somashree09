#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int i;

    printf("Reversed array:\n");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    return 0;
}