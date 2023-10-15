#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
main()
{
	int n, i, t = 0;
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if (n < 0)
		{
			printf("\nDu lieu khong hop le. Xin kiem tra lai!");
		}
		else if ((n < 2) && (n >= 0))
		{
			printf("\nDay khong phai so nguyen to\n");
		}
	} while (n < 0);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			t++;
		}
	}
	if (t == 0)
	{
		printf("\nDay la so nguyen to\n");
	}
	else
	{
		printf("\nDay khong phai so nguyen to\n");
	}
	getch();
}