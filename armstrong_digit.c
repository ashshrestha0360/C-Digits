#include <stdio.h>
int main()
{
    int n, r, c, sum = 0, fix;
    printf("Enter a number");
    scanf("%d", &n); fix = n;  //var fix keeps value of n unchanged

    while (n > 0)
    {
        r = n % 10;
        c = r * r * r;
        sum = sum + c;
        n = n / 10;
    }
    n = fix;
    if (n == sum)
    {
        printf("Armstrong number\n");      /* Armstrong number = sum of cube of digits is equal to original digit 
                                            example: 407
                                            cube of 4 + cube of 0 + cube of 7 = 407*/
    }
    else
    {
        printf("Not a Armstrong number\n");
    }
    return 0;
}