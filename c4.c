#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
main()
{
	int i, j, k;
	for (i = 0; i <= 20; i++) // có tối đa 20 tờ tiền 10k nên cho i chạy từ 0 đến 20
	{
		for (j = 0; j <= 10; j++) // tối đa 10 tờ tiền 20k
		{
			for (k = 0; k <= 4; k++) // tối đa 4 tờ tiền 50k
			{
				if (i * 1 + j * 2 + k * 5 == 20) // tổng của 3 tờ tiền là 200k
				{
					printf("\n%d to 10k, %d to 20k va %d to 50k co tong la 200k\n", i, j, k);
				}
			}
		}
	}
	getch();
}