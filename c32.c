#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
	int i,j,k;
	float a=100,b=100,c=100,n,x;
	printf("\nnhap x\n");
	scanf("%f",&x);
	
	printf("\nnhap N\n");
	scanf("%f",&n);
	

	for(i = 1;i<=n;i++)
	{
		a = a + pow(-1,i+1)*x/(10*i);
	}
	printf("\nA = %f\n",a);
	for(j = 1;j<=n;j++)
	{
		b = b + pow(-1,j+1)*x/(10*j);
	}
	printf("\nB= %f\n",b);
	for(k = 1;k<=n;k++)
	{
		c = c + pow(-1,k+1)*x/(10*k);
	}
	printf("\nC= %f\n",c);
	getch();
}