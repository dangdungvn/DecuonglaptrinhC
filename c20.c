#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int a, b, gcd;
    do
    {
        printf("Nhap a: ");
        scanf("%d", &a);
    } while (a < 0);
    do
    {
        printf("Nhap b: ");
        scanf("%d", &b);
    } while (b < 0);
    for (int i = a; i > 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }
    printf("UCLN cua 2 so la: %d", gcd);
}