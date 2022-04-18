#include <stdio.h>
int main()
{
    int n, r, sum = 0, fix;
    printf("Enter a number");
    scanf("%d", &n);
    fix = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    n = fix;
    if (n == sum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    return 0;
}