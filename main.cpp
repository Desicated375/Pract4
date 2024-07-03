#include <stdio.h>

int main()
{
    int n;
    int numb = 0;
    printf("Enter a natural number n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == n / i)
        {
            numb++;
        }
    }

    printf("The number of equal divisors of a number %d: %d\n", n, numb);

    return 0;
}
