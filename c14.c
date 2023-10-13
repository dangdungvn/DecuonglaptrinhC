#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
main()
{
	int i, j, k;
	for (i = 0; i <= 20; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			for (k = 0; k <= 4; k++)
			{
				if (i * 1 + j * 2 + k * 5 == 20)
				{
					printf("\n%d to 10k, %d to 20k va %d to 50k co tong la 200k\n", i, j, k);
				}
			}
		}
	}
} // giống câu 4