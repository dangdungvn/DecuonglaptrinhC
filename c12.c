#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	int a, b;
	printf("Nhap vao so nguyen duong a: ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen duong b: ");
	scanf("%d", &b);
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	printf("UCLN cua 2 so la: %d\n", a);
	getch();
}
// ví dụ khi a = 30, b = 26
// kiểm tra điều kiện a != b, đúng => thực hiện các câu lênh trong vòng lặp
// a>b => a = a - b = 30 - 26 = 4 => a = 4
// b>a => b = b - a = 26 - 4 = 22 => b = 22
// tiếp tục cho đến khi a = b => UCLN sẽ là 1 trong 2 số a,b sau khi kết thúc vòng lặp