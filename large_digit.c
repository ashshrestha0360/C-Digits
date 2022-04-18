// find the largest digit from the number
#include <stdio.h>
int main()
{
    int n, r, l = 0;
    printf("Enter the Number :");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        if (l < r)
        {
            l = r;
        }
        n = n / 10;
    }
    printf("The Largest Digit is :%d \n", l);
    return 0;
}