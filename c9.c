#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
main()
{
	int i, j, k;
	printf("\n nhung so co tong 3 chu so bang 9 la: \n");
	for (i = 1; i <= 9; i++) // Chữ số đầu tiên của 1 số có 3 chữ số chạy từ 1 đến 9
	{
		for (j = 0; j <= 9; j++) // Chữ số thứ 2 chạy từ 0 đến 9
		{
			for (k = 0; k <= 9; k++) // Chữ số thứ 3 chạy từ 0 đến 9
			{
				if (i + j + k == 9) // Kiểm tra điều kiện tổng 3 chữ số bằng 9
				{
					printf("%d%d%d\t", i, j, k); // in ra số
				}
			}
		}
	}
	getch();
}