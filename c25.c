#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
	int n,i,t = 1,d =1;
	do 
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if (n < 0) 
		{
			printf("\nDu lieu khong hop le. Xin kiem tra lai!\n");
		}
	} while (n < 0);
	if(n%2!=0)
	{
		for(i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
				t= t*i;
			}
		}
		printf("\nT= %d",t);
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			{
				d= d*i;
			}
		}
		printf("\nD= %d",d);
	}

	getch();
}