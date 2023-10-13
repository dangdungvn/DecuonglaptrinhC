#include<stdio.h>
#include<conio.h>
main(){
	int a,b,i,n,ucln;
	printf("nhap  so a: ");
	scanf("%d",&a);
	printf("nhap  so b: ");
	scanf("%d",&b);
	if(a>b)
	{
		n = b;
	}
	else
	{
		n = a;
	}
	ucln=1;
	for(i=1;i<n;i++)
	{
		if((a%i==0) && (b%i==0))
		{
		ucln = i;
		}
	}
	printf("\n Uoc chung lon nhat cua 2 so a va b la: %d\n",ucln);
	
}