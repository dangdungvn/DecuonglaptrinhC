#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
void nhap(int a[100], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Nhap a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}
void xuat(int a[100], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}
void tbc(int a[100], int n)
{
	int i, d = 0, t = 0;
	for (i = 0; i < n; i++)
	{
		if ((a[i] > 0) && (a[i] % 3 == 0))
		{
			d++;
			t += a[i];
		}
	}
	printf("\nTBC cua cac so chia het cho 3 la: %.2f", (float)t / d);
}
void snn(int a[100], int n)
{
	int i, snn = a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] < snn)
		{

			snn = a[i];
		}
	}
	printf("\nSNN cua day la: %d", snn);
}
void sapxep(int a[100], int n)
{
	int i, j, tg;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i] < a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	printf("\nDay sau khi duoc sap xep: ");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}
void tong(int a[100], int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] >= 0)
		{

			sum += a[i];
		}
	}
	printf("\nTong cua cac so khong am trong day la: %d", sum);
}
void dem(int a[100], int n)
{
	int i, dem = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{

			dem++;
		}
	}
	printf("\nTrong day co %d so le", dem);
}
main()
{
	int a[100], n;
	printf("\nNhap so phan tu trong day: ");
	scanf("%d", &n);
	nhap(a, n);
	xuat(a, n);
	tbc(a, n);
	snn(a, n);
	sapxep(a, n);
	tong(a, n);
	dem(a, n);
	getch();
}