//Product of digit
#include <stdio.h>
int main()
{
    int n, r, product = 1;
    printf("Enter any number\n");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        product = product * r;
        n = n / 10;
    }
    printf("Product of digit is %d\n", product);
    return 0;
}