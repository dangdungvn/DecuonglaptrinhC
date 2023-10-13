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
		//printf("a[%d]= ",i);
		//scanf("%d",&a[i]);
		a[i] = rand() % 100 - 50;
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
void tongam(int a[100], int n)
{
	int i, tongam=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			tongam += a[i];
		}
	}
	printf("\nTBC cua cac so am: %d\n",tongam);
}
void tongduong(int a[100], int n)
{
	int i, tongduong=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			tongduong += a[i];
		}
	}
	printf("\nTBC cua cac so duong: %d\n",tongduong);
}
void loc(int a[100], int n)
{
	int i;
	printf("\nCac so chia het cho 6, tan cung bang 2 la: ");
	for(i=0;i<n;i++)
	{
		if((a[i]%6==0)&&(a[i]%10==2))
		{
		printf("%5d",a[i]);
		}
	}
}
main()
{
	int a[100], n;
	printf("\nNhap so phan tu cua mang: \n");
	scanf("%d",&n);
	nhapmang(a,n);
	inmang(a,n);
	tongam(a,n);
	tongduong(a,n);
	loc(a,n);
	getch();
}