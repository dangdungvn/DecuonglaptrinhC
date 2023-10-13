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
		printf("\n nhap n = ");
		scanf("%d", &n);
	} while (n <= 0);
	for (i = 0; i <= n; i++)
	{
		t += i * (i + 1);
	}
	printf("\n%d\n", t);
}