#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int i, j, n, temp;

    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    int a[n], b[n], merged[2 * n];

    printf("Enter elements of array 1:\n");
    for (i = 0; i < n; i++)
        {
        scanf("%d", &a[i]);
        merged[i] = a[i];
        }

    printf("Enter elements of array 2:\n");
    for (i = 0; i < n; i++)
        {
        scanf("%d", &b[i]);
        merged[n + i] = b[i];
        }

    // Sort the merged array in descending order using bubble sort
    for (i = 0; i < 2 * n - 1; i++)
         {
        for (j = 0; j < 2 * n - i - 1; j++)
         {
            if (merged[j] < merged[j + 1])
                {
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
                }
        }
    }

    printf("Merged and sorted in descending order:\n");
    for (i = 0; i < 2 * n; i++)
        {
        printf("%d ", merged[i]);
        }

    return 0;
}
