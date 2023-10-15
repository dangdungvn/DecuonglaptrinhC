#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int n;
    long long t = 0;
    float p = 0;
    do
    {
        printf("\nNhap n = ");
        scanf("%d", &n);
    } while (n <= 0); // dùng vòng lặp while để bắt người dùng nhập đúng giá trị của n
    for (int i = 1; i <= n; i++)
    {
        t += i * (i + 1); // biểu thức đề bài cho là t = t + i * (i + 1)
        if (i % 2 == 1)
        {
            p += sqrt(i); // biểu thức đề cho là tổng căn của các số lẻ
        }
    }
    printf("\n%lld\n", t);
    printf("\n%.2f\n", p);
}