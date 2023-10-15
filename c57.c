#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
typedef struct nv
{
	char maNV[10];
	char hoTen[50];
	char p[50];
} nv;
void nhap(nv nv[10], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		printf("\nnhap ma nhan vien: ");
		gets(nv[i].maNV);
		printf("\nnhap ho ten: ");
		gets(nv[i].hoTen);
		printf("\nnhap phong ban: ");
		gets(nv[i].p);
	}
}
void xuat(nv nv[10], int n)
{
	int i;
	printf("\n danh sach nhan vien: \n");
	printf("\n maNV\tHo Ten\tPhong ban\n");
	for (i = 0; i < n; i++)
	{
		printf("%s    %s     %s\n", nv[i].maNV, nv[i].hoTen, nv[i].p);
	}
}
void tim(nv nv[10], int n)
{
	printf("\n nhan vien phong ke toan:\nMaNV\tHo ten\tPhong ban\n");
	for (int i = 0; i < n; i++)
	{
		if (strcmp(nv[i].p, "ke toan") == 0)
		{
			printf("%s   %s   %s\n", nv[i].maNV, nv[i].hoTen, nv[i].p);
		}
	}
}
main()
{
	int n;
	nv nv[10];
	printf("\n nhap so nhan vien: ");
	scanf("%d", &n);
	nhap(nv, n);
	xuat(nv, n);
	tim(nv, n);
	getch();
}