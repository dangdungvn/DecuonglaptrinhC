#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void nhapMang(float a[100], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%f", &a[i]);
	}
}
void inMang(float a[100], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%5.2f", a[i]);
	}
}
void sln(float a[100], int n)
{
	int i, t = a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] > t)
		{
			t = a[i];
		}
	}
	printf("\nso lon nhat cua mang la: %d\n", t);
}
void sapXep(float a[100], int n)
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
	printf("\nMang sau khi duoc sap xep: \n");
	for (i = 0; i < n; i++)
	{
		printf("%5.2f", a[i]);
	}
}
void tbc(float a[100], int n)
{
	int i, tong = 0, d = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			d++;
			tong += a[i];
		}
	}
	printf("\nTBC cua cac so am: %d\n", tong / d);
}
main()
{
	float a[100];
	int n;
	printf("\nNhap so phan tu cua mang: \n");
	scanf("%d", &n);
	nhapMang(a, n);
	inMang(a, n);
	sln(a, n);
	sapXep(a, n);
	tbc(a, n);
}