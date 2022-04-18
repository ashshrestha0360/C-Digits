#include <stdio.h>
int main()
{
    int i, n, count = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Composite number\n");
    }

    return 0;
}