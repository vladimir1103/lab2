// c.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <math.h>

void diskriminant(float b, float a, float c, float *B)
{
	*B = b*b - 4 * a*c;
}

int main(int argc, char* argv[])
{
	float a, b, c, x1, x2, d, o;
	printf("Enter A,B,C\n");
	scanf("%f %f %f", &a, &b, &c);
	diskriminant(b, a, c, &d);
	printf("D = %f\n", d);

	if (d>0)
	{
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		printf("x1=%f\nx2=%f\n", x1, x2);
		printf("equation has two roots");
	}
	else
		if (d == 0)
		{
			x1 = -b / 2 * a;
			printf("x=%f\n", x1);
			printf("equation has single root");

		}
		else
			if (d<0)
			{
				printf("equation has no real roots");
			}

	getch();

	return 0;
}

