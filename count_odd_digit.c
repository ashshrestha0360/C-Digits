// count the odd digit
#include <stdio.h>
int main()
{
    int n, r, count = 0;
    printf("Enter a number");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        if (r % 2 != 0)
        {
            count ++;
        }
        n = n / 10;
    }
    printf("Total Odd digit: %d",count);

    return 0;
}