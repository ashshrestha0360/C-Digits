// Find the even digit
#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter a number");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        if (r % 2 == 0)
        {
            printf("even is %d\t", r);
        }
        n = n / 10;
    }

    return 0;
}