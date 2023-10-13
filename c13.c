#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
main()
{
	int i, j, sum;
	for (i = 1; i < 100; i++) // số cần tìm là các biến i, do i < 100 nên cho chạy đến 100
	{
		sum = 0;				// tạo 1 biến sum để lưu tổng của các ước của i
		for (j = 1; j < i; j++) // ở đây j là ước của i, sẽ cho j chạy từ 1 đến i
		{
			if (i % j == 0) // kiểm tra xem j có là ước của i hay không
			{
				sum += j; // lưu tổng của các ước của i
			}
		}
		if (sum == i) // kiểm tra xem sum có bằng i hay không
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
	getch();
}