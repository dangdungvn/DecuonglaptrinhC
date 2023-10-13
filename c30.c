#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
main()
{
	int i, j, k;
	printf("\nCac so co 3 chu so co tat ca cac so bang 9\n");
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i + j + k == 9)
					printf("%d\t", i * 100 + j * 10 + k);
			}
		}
	}
	getch();
}