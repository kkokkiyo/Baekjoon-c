#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && a < 7 && b > 0 && b < 7 && c > 0 && c < 7)
    {
        if (a == b && b == c)
        {
            printf("%d", 10000 + a * 1000);
        }
        else if (a == b || b == c || a == c)
        {
            if (a == b)
            {
                printf("%d", 1000 + a * 100);
            }
            else if (b == c)
            {
                printf("%d", 1000 + b * 100);
            }
            else if (a == c)
            {
                printf("%d", 1000 + c * 100);
            }
        }
        else
        {
            if (a > b && a > c)
            {
                printf("%d", a * 100);
            }
            else if (b > a && b > c)
            {
                printf("%d", b * 100);
            }
            else
            {
                printf("%d", c * 100);
            }
        }
    }
}