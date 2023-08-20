#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void performOperation(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            reverseArray(arr, 0, i - 1);
        }
    }
}

int main()
{
    int n;
    // printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    // printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    performOperation(arr, n);

    // printf("Final order of the array after the operation:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}