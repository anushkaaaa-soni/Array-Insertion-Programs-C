#include <stdio.h>

int main()
{
    int a[10], n, x, p, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    printf("Enter position: ");
    scanf("%d", &p);

    if(p < 1 || p > n + 1)
    {
        printf("Invalid position");
        return 0;
    }

    for(i = n - 1; i >= p - 1; i--)
    {
        a[i + 1] = a[i];
    }

    a[p - 1] = x;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
