#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
void dao(char *s)
{
	int i, n = strlen(s);
	printf("\nChuoi sau khi duoc dau nguoc: ");
	for (i = n - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
void doiXung(char *s)
{
	int i, n = strlen(s), kt;
	for (i = 0; i < n; i++)
	{
		if (s[i] != s[n - i - 1])
		{
			kt = 0;
			break;
		}
		else
		{
			kt = 1;
		}
	}
	if (kt == 1)
	{
		printf("\nChuoi la chuoi doi xung");
	}
	else
	{
		printf("\nChuoi khong phai chuoi doi xung");
	}
}
void inHoa(char *s)
{
	int i, n = strlen(s);
	printf("\nChuoi in hoa: ");
	for (i = 0; i < n; i++)
	{
		putchar(toupper(s[i]));
	}
}
void dem(char *s)
{
	int i, n = strlen(s), dem = 0;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'X')
		{
			dem++;
		}
	}
	printf("\nChu X xuat hien %d lan", dem);
}
void chuanHoa(char *s)
{
	int i, j, n = strlen(s);
	for (i = 0; i < n; i++)
	{
		if (s[i] == ' ')
		{
			for (j = i; j < n - 1; j++)
			{
				s[j] = s[j + 1];
			}
			s[n - 1] = '\0';
			i--;
			n--;
		}
		else
			break;
	}
	for (i = n - 1; i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			s[n - 1] = '\0';
			n--;
		}
		else
			break;
	}
	for (i = 0; i < n; i++)
	{
		if ((s[i] == ' ') && (s[i + 1] == ' '))
		{
			for (j = i; j < n - 1; j++)
			{
				s[j] = s[j + 1];
			}
			s[n - 1] = '\0';
			i--;
			n--;
		}
	}
	s[0] = toupper(s[0]);
	printf("\nDay sau khi duoc chuan hoa la: ");
	puts(s);
}
main()
{
	char s[100];
	printf("\nNhap chuoi: ");
	gets(s);
	dao(s);
	doiXung(s);
	inHoa(s);
	chuanHoa(s);
}
