#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter a number");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        printf("%d\t", r);
        n = n / 10;
    }

    return 0;
}