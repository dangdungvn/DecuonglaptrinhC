#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void nhapmang(int a[100][100], int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("\nNhap a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void inmang(int a[100][100], int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}
void tong(int a[100][100], int n, int m)
{
	int i, j, tong = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((a[i][j] % 10 == 6) || (a[i][j] % 10 == -6))
			{
				// printf("%d\t",a[i][j]);
				tong += a[i][j];
			}
		}
	}
	printf("\nTong cac chu so tan cung bang 6 la: %d\n", tong);
}
void sln(int a[100][100], int n, int m)
{
	int i, j, t = a[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i][j] > t)
			{
				t = a[i][j];
			}
		}
	}
	printf("\nSo lon nhat cua mang la: %d\n", t);
}
void dem(int a[100][100], int n, int m)
{
	int i, j, d = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i][j] % 6 == 0)
			{
				d++;
			}
		}
	}
	printf("\nso chan chia het cho 3: %d\n", d);
}
void tong2(int a[100][100], int n, int m)
{
	int i, j, tong2 = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == 1)
			{
				tong2 += a[i][j];
			}
		}
	}
	printf("\nTong cac so o hang 2 cua mang la: %d\n", tong2);
}
void tong3(int a[100][100], int n, int m)
{
	int i, j, tong3 = 0, d3 = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (j == 1)
			{
				tong3 += a[i][j];
				d3++;
			}
		}
	}
	printf("\nTbc cac so o cot 2 cua mang la: %.2f\n", (float)tong3 / d3);
}
void cheo(int a[100][100], int n, int m)
{
	int i, j, tongc = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == j)
			{
				tongc += a[i][j];
			}
		}
	}
	printf("\nTong cac so tren duong cheo chinh cua mang la: %d\n", tongc);
}
main()
{
	int a[100][100], n, m;
	printf("\n nhap so dong:");
	scanf("%d", &n);
	printf("\n nhap so cot:");
	scanf("%d", &m);
	nhapmang(a, n, m);
	inmang(a, n, m);
	tong(a, n, m);
	sln(a, n, m);
	dem(a, n, m);
	tong2(a, n, m);
	tong3(a, n, m);
	cheo(a, n, m);
}
