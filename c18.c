#include<stdio.h>
int main() {
	int t, n;
	do {
		printf("\nNhap vao thang: ");
		scanf("%d", &t);
		if (t < 1 || t > 12)
			printf("\nDu lieu thang khong hop le. Xin kiem tra lai!");
	} while (t < 1 || t > 12);
	do {
		printf("\nNhap vao nam: ");
		scanf("%d", &n);
		if (n < 0) {
			printf("\nDu lieu nam khong hop le. Xin kiem tra lai!");
		}
	} while (n < 0);
	switch (t) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("\nCo 31 ngay\n");
		break;

	case 4: case 6: case 9 : case 11:
		printf("\nCo 30 ngay\n");
		break;
	case 2:
		if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		{
			printf("\nCo 29 ngay !\n");
		}
		else {
			printf("\nCo 28 ngay !\n");
		}
	}
	getch();
}