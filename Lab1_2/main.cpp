#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{

	int h = 0;
	int m = 0;
	int s = 0;
	int sum_sec = 0;
	float sum_deg = 0;
	setlocale(LC_ALL, "Rus");
	printf("Введите количество часов: \n");
	scanf("%d", &h);
	printf("Введите количество минут: \n");
	scanf("%d", &m);
	printf("Введите количество секунд: \n");
	scanf("%d", &s);
	sum_sec = (h * 360) + (m * 60) + s;
	printf("Секунды: %i\n", sum_sec);
	sum_deg = (h * 30) + (m * 0.5) + (s * 0.08);
	printf("Градусы: %f\n", sum_deg);
	return 0;
}