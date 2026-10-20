#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, x, i;

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
