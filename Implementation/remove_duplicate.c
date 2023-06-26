#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr1[n];
    arr1[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < sizeof(arr1) / sizeof(arr1[0]); j++)
            if (arr1[])
    }

    return 0;
}