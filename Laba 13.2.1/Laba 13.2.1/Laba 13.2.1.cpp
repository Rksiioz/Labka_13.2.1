#include <cmath>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

#define z 7

#define MAX(x, y) ((x*x+y+z)>(x*y*z)?(x*x+y+z):(x*y*z)) 
#define MIN(x, y) (pow(x, 2)+pow(y + z, 2)<(x * y)?(pow(x, 2)+pow(y+z, 2)):(x*y))
#define PRINTI(w) puts("���� �����: "); \
 printf(#w" = %d\n",w)


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c;
	int w;
	char ch = '0';
	do
	{
#if (z > 0 && z < 5)
		{

			puts("��� ��������� ����������� � ���� �������� ������");
			puts("������ 2 �����: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTI(b);

			w = MAX(a, b, z);
			PRINTI(w);
		}
#else
		{
			puts("��� ��������� �������� � ���� �������� ������");
			puts("������ 2 �����: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTI(b);


			w = MIN(a, b, z);
			PRINTI(w);
		}
#endif
		puts("��� ��������� ������ 䳿, ������ y \n");
		ch = _getch();
	} while (ch == 'y');
}