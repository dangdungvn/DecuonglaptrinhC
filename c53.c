#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void nguoc(char *s)
{
	int i, n = strlen(s);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}
void doixung(char *s) 
{
	int i,kt,n = strlen(s);
	for(i = 0; i < n; i++)
	{
		if(s[i] != s[n-i-1])
		{
			kt = 0;
			break;
		}
		else kt = 1;
	}
	if(kt == 1)
	{
		printf("\n Chuoi s la chuoi doi xung\n");
	}
	else
	{
		printf("\n Chuoi s khong phai la chuoi doi xung\n");
	}
}

void hoa(char *s) 
{
	int i,n = strlen(s);
	printf("\n chuoi chu hoa: ");
	for (i = 0; i < n; i++) 
	{
		putchar(toupper(s[i]));
	}
}
void tim(char *s)
{
	int i, n = strlen(s), dem = 0;
	for( i = 0;i<n;i++)
	{
		if(s[i]=='X')
		{
			dem = dem+ 1;
		}
	}
	printf("\n so lan ky tu X xuat hien la: %d\n",dem);
}
void chuanhoa(char *s)
{
	int n = strlen(s);
 
	for(int i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			for(int j=i;j<n-1;j++)
			{
				s[j] = s[j+1];
			}
			s[n-1]='\0';
			i--;
			n--;
		}
		else break;
	}
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			s[i]='\0';
			n--;
		}
		else break;
	}
	for(int i=1;i<n-1;i++)
	{
		if((s[i]==' ')&&(s[i+1]==' '))
		{
			for(int j=i;j<n-1;j++)
			{
				s[j] = s[j+1];
			}
			s[n-1]='\0';
			i--;
			n--;
		}
	}
	s[0] =  toupper(s[0]);
	printf("\n chuoi duoc chuan hoa: "); puts(s);
}



int main() {
	char s[100];
	printf("Nhap chuoi s: ");
	gets(s);
	printf("\nChuoi dao nguoc la: ");
	nguoc(s);
	doixung(s);
	hoa(s);
	printf("\n");
	tim(s);
	chuanhoa(s);
	getch();

}
