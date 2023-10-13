#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

void nhapmang(int a[100], int n)
{
	int i;
	for(i=0; i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void inmang(int a[100], int n)
{
	int i;
	for(i = 0; i<n;i++)
	{
		printf("%5d",a[i]);
	}
}
void snn(int a[100], int n)
{
	int i,t=a[0];
	for(i=0;i<n;i++)
		{
			if(a[i]<t)
			{
				t = a[i];
			}
		}
	printf("\nso nho nhat cua mang la: %d\n",t);
}
void sapxep(int a[100], int n)
{
	int i,tg;
	for(i = 0;i<n;i++)
	{
		if(a[i]<a[i+1])
		{
			tg=a[i];
			a[i]=a[i+1];
			a[i+1]=tg;
		}
	}
	printf("\nMang sau khi duoc sap xep: \n");
	for(i = 0; i<n;i++)
	{
		printf("%5d",a[i]);
	}
}
void tbc(int a[100], int n)
{
	int i, tong=0,d=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			d++;
			tong += a[i];
		}
	}
	printf("\nTBC cua cac so am: %d\n",tong/d);
}
main()
{
	int a[100], n;
	printf("\nNhap so phan tu cua mang: \n");
	scanf("%d",&n);
	nhapmang(a,n);
	inmang(a,n);
	sln(a,n);
	sapxep(a,n);
	tbc(a,n);
}