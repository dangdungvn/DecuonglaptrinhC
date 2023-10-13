#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int a, b;
    print("Nhap a va b cua phuong trinh ax + b = 0");
    scanf("%d%d", &a, &b); // nhap a va b
    if (a == 0)            // kiem tra dieu kien cua a
    {
        if (b == 0) // kiem tra khi b == 0
        {
            print("Phuong trinh vo so nghiem");
        }
        else // kiem tra khi b != 0
        {
            print("Phuong trinh vo nghiem");
        }
    }
    else
    {
        print("Phuong trinh co nghiem x = %.2f", -b / a); // khi a != 0 thi hệ có nghiem x = -b/a
    }
    getch();
}