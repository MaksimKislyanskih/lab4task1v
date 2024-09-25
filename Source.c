#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	float i = 2;
	printf("¬ыводимое дес€тичное число соответсвующее 1/i = %lf", 1 / i);
}
