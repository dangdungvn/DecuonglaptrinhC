#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	float q = 0;
	int n, x, i;
	do
	{
		printf("\n nhap n = ");
		scanf("%d", &n);
	} while (n <= 0); // dùng vòng lặp while để bắt người dùng nhập đúng giá trị của n
	do
	{
		printf("\n nhap x = ");
		scanf("%d", &x);
	} while (x <= 0); // dùng vòng lặp while để bắt người dùng nhập đúng giá trị của x
	for (i = 1; i <= n; i++)
	{
		q = q + exp(i * x); // hàm exp(x) để tính e^x, q là tổng của các e^(từ 1x đến nx)
	}
	printf("so Q la: %.2f", q + 10); // nhớ cộng thêm 10 vào vì đề bài có vậy
}