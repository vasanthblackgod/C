#include <stdio.h>

int checkSum(int arr[], int n, int target)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    int arr[] = {5, 7, 1, 2, 8, 4, 3};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    if (checkSum(arr, n, target))
    {
        printf("A pair with the sum %d exists.\n", target);
    } else
    {
        printf("No pair with the sum %d exists.\n", target);
    }

    return 0;
}
