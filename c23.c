#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
main()
{
	int i, j, k, n = 100;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if ((5 * i + 3 * j + k / 3 == 100) && (i + j + k == 100))
				{
					printf("\n Co %d trau dung, %d trau nam, %d trau gia\n", i, j, k);
				}
			}
		}
	}
	getch();
} // giống bài 4