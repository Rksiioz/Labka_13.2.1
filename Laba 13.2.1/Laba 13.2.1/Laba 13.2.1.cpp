#include <cmath>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

#define z 7

#define MAX(x, y) ((x*x+y+z)>(x*y*z)?(x*x+y+z):(x*y*z)) 
#define MIN(x, y) (pow(x, 2)+pow(y + z, 2)<(x * y)?(pow(x, 2)+pow(y+z, 2)):(x*y))
#define PRINTI(w) puts("¬аше число: "); \
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

			puts("ўоб визначити максимальне з двох числових вираз≥в");
			puts("¬вед≥ть 2 числа: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTI(b);

			w = MAX(a, b, z);
			PRINTI(w);
		}
#else
		{
			puts("ўоб визначити м≥н≥мальне з двох числових вираз≥в");
			puts("¬вед≥ть 2 числа: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTI(b);


			w = MIN(a, b, z);
			PRINTI(w);
		}
#endif
		puts("ўоб повторити вказан≥ д≥њ, нажм≥ть y \n");
		ch = _getch();
	} while (ch == 'y');
}