// sum of factorial of digit
#include <stdio.h>
int main()
{
    int i = 1, n, r, sum , fact = 1;
    printf("Enter the number:");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        while ( i <= r)
        {
           
            fact *= i;
             i++;
        }
        if(r<3)
        {
            sum = 0;
            sum = sum + fact;
        }
        else
        {
            sum = 1;
            sum = sum + fact;

        }
        fact = 1;
        n = n / 10;
    }
    printf("%d\n", sum);

    return 0;
}