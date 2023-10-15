#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct sv
{
	char maSV[10];
	char hoTen[50];
	int td;
} sv;
void nhap(sv sv[10], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		printf("\nnhap ma sinh vien: ");
		gets(sv[i].maSV);
		printf("\nnhap ho ten: ");
		gets(sv[i].hoTen);
		printf("\nnhap tong diem: ");
		scanf("%d", &sv[i].td);
	}
}
void xuat(sv sv[10], int n)
{
	int i;
	printf("\n danh sach sinh vien: ");
	printf("\n maSV\tHo Ten\tTong diem\n");
	for (i = 0; i < n; i++)
	{
		printf("%s    %s     %d\n", sv[i].maSV, sv[i].hoTen, sv[i].td);
	}
}
void tim(sv sv[10], int n)
{
	printf("\n sinh vien gioi:\nmaSV\tHo ten\tTong diem\n");
	for (int i = 0; i < n; i++)
	{
		if (sv[i].td >= 8)
		{
			printf("%s   %s   %d\n", sv[i].maSV, sv[i].hoTen, sv[i].td);
		}
	}
	printf("\n sinh vien kha:\nmaSV\tHo ten\tTong diem\n");
	for (int i = 0; i < n; i++)
	{
		if ((sv[i].td >= 7) && (sv[i].td < 8))
		{
			printf("%s   %s   %d\n", sv[i].maSV, sv[i].hoTen, sv[i].td);
		}
	}
	printf("\n sinh vien ngu:\nmaSV\tHo ten\tTong diem\n");
	for (int i = 0; i < n; i++)
	{
		if ((sv[i].td >= 6) && (sv[i].td < 7))
		{
			printf("%s   %s   %d\n", sv[i].maSV, sv[i].hoTen, sv[i].td);
		}
	}
}
void sapXep(sv sv[10], int n)
{
	int i, j, tg;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (sv[i].td > sv[j].td)
			{
				tg = sv[i].td;
				sv[i].td = sv[j].td;
				sv[j].td = tg;
			}
		}
	}
	printf("\nDanh sach sinh vien sau khi duoc sap xep: \n");
	printf("\n maSV\tHo Ten\tTong diem\n");
	for (i = 0; i < n; i++)
	{
		printf("%s    %s     %d\n", sv[i].maSV, sv[i].hoTen, sv[i].td);
	}
}
main()
{
	int n;
	sv sv[10];
	printf("\n nhap so sinh vien: ");
	scanf("%d", &n);
	nhap(sv, n);
	xuat(sv, n);
	tim(sv, n);
	sapXep(sv, n);
	getch();
}