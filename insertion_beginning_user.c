#include <stdio.h>

int main()
{
    int a[10], n, x, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    for(i = n - 1; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }

    a[0] = x;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
