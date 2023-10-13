#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
struct sv
{
	char masv[10];
	char hoten[50];
	int td;
};
void nhap(sv sv[10], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nnhap ma sinh vien: ");
		gets(sv[i].masv);
		printf("\nnhap ho ten: ");
		gets(sv[i].hoten);
		printf("\nnhap tong diem: ");
		scanf("%d",&sv[i].td);
	}
}
void xuat(sv sv[10], int n)
{
	int i;
	printf("\n danh sach sinh vien: ");
	printf("\n masv\tHo Ten\tTong diem\n");
	for(i=0;i<n;i++)
	{
		printf("%s    %s     %d\n",sv[i].masv,sv[i].hoten,sv[i].td);
	}
}
void tim(sv sv[10], int n)
{
	printf("\n sinh vien gioi:\nMasv\tHo ten\tTong diem\n");
	for (int i = 0; i < n; i++)
	{
		if (sv[i].td>=8)
		{
			printf("%s   %s   %d\n",sv[i].masv, sv[i].hoten,sv[i].td);
		}
	}
	printf("\n sinh vien kha:\nMasv\tHo ten\tTong diem\n");
	for (int i = 0; i < n; i++)
	{
		if ((sv[i].td>=7)&&(sv[i].td<8))
		{
			printf("%s   %s   %d\n",sv[i].masv, sv[i].hoten,sv[i].td);
		}
	}
	printf("\n sinh vien ngu:\nMasv\tHo ten\tTong diem\n");
	for (int i = 0; i < n; i++)
	{
		if ((sv[i].td>=6)&&(sv[i].td<7))
		{
			printf("%s   %s   %d\n",sv[i].masv, sv[i].hoten,sv[i].td);
		}
	}
}
void sapxep(sv sv[10], int n)
{
	int i,j,tg;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n;j++)
		{
			if(sv[i].td>sv[j].td)
			{
				tg=sv[i].td;
				sv[i].td=sv[j].td;
				sv[j].td=tg;
			}
		}
	}
	printf("\nDanh sach sinh vien sau khi duoc sap xep: \n");
	printf("\n masv\tHo Ten\tTong diem\n");
	for(i=0;i<n;i++)
	{
		printf("%s    %s     %d\n",sv[i].masv,sv[i].hoten,sv[i].td);
	}

}
main()
{
	int n;
	sv sv[10];
	printf("\n nhap so sinh vien: ");
	scanf("%d",&n);
	nhap(sv,n);
	xuat(sv,n);
	tim(sv,n);
	sapxep(sv,n);
	getch();
}