#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
main()
{
	int a, b, c, s, p, t;

	do
	{
		printf("\n nhap a = ");
		scanf("%d", &a);
	} while (a <= 0);

	do
	{
		printf("\n nhap b = ");
		scanf("%d", &b);
	} while (b <= 0);

	do
	{
		printf("\n nhap c = ");
		scanf("%d", &c);
	} while (c <= 0);

	if ((a < b + c) || (c > b + a) || (b > c + a)) // xét các điều kiện của từng tam giác
	{
		printf("\n day la tam giac\n");
		if (a == b && b == c)
		{
			printf("\n day la tam giac deu\n");
		}
		else if (a == b || a == c || b == c)
		{
			printf("\n day la tam giac can\n");
		}
		else if (a == b && b == c)
		{
			printf("\n day la tam giac deu\n");
		}
		else if ((pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(b, 2) + pow(a, 2)))
		{
			printf("\n day la tam giac vuong\n");
		}
		else
		{
			printf("\n day la tam giac thuong\n");
		}
		p = a + b + c;
		t = p / 2;
		s = sqrt(t * (t - a) * (t - b) * (t - c));
		printf("\n chu vi cua tam giac la: %d\n", p);
		printf("\n dien tich cua tam giac la: %d\n", s);
	}
	else
	{
		printf("\n day khong phai la tam giac\n");
	}
	getch();
}
