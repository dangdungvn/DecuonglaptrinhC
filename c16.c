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
	} while (n <= 0); // dùng vòng lặp while để bắt người dùng nhập đúng giá trị của n
	for (i = 0; i <= n; i++)
	{
		t += i * (i + 1); // biểu thức đề bài cho là t = t + i * (i + 1)
	}
	printf("\n%d\n", t);
}