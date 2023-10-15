#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct sv
{
	// char maSv[10];
	char hoTen[50];
	int ns;
	int td;
} sv;

void nhap(sv sv[10], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		// printf("\nnhap ma sinh vien: ");
		// gets(sv[i].maSv);
		printf("\nnhap ho ten: ");
		gets(sv[i].hoTen);
		printf("\nnhap nam sinh: ");
		scanf("%d", &sv[i].ns);
		printf("\nnhap tong diem: ");
		scanf("%d", &sv[i].td);
	}
}
void xuat(sv sv[10], int n)
{
	int i;
	printf("\n danh sach sinh vien: ");
	printf("\n Ho ten\tNam sinh\tTong diem\n");
	for (i = 0; i < n; i++)
	{
		printf("%s    %d     %d\n", sv[i].hoTen, sv[i].ns, sv[i].td);
	}
}
void tim(sv sv[10], int n)
{
	int tuoi;
	printf("Sinh vien tu 20 tuoi tro xuong: \n");
	printf("\n Ho ten\tNam sinh\tTong diem\n");
	for (int i = 0; i < n; i++)
	{
		tuoi = 2015 - sv[i].ns;
		if (tuoi <= 20)
		{
			printf("%s    %d     %d\n", sv[i].hoTen, sv[i].ns, sv[i].td);
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
	printf("\n Ho ten\tNam sinh\tTong diem\n");
	for (i = 0; i < n; i++)
	{
		printf("%s    %d     %d\n", sv[i].hoTen, sv[i].ns, sv[i].td);
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