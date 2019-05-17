#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isInArea(long float *x, long float *y);

void main() {
	char task;
	long float x, y;
	printf("%s", "Task: ");
	scanf("%c", &task);

	switch (task)
	{
	case '1':
		printf("%s", "x = ");
		scanf("%lf", &x);
		printf("%s", "y = ");
		scanf("%lf", &y);

		if (isInArea(&x, &y))
			puts("Point is in the area.");
		else
			puts("Point is not in the area.");
		break;
	case '2':
		printf("%s", "x = ");
		scanf("%lf", &x);
		(x > 3) ? (y=(1 / (x*x*x + 6))) : (y=(x*x - 3 * x + 9));
		printf("f(x) = %lf\n", y);
		break;
	default:
		break;
	}

	system("pause");
}

bool isInArea(long float *x, long float *y) {
	if (sqrt(*x * *x + *y * *y) <= 1 && !(*x > 0 && *y < 0))
		return true;
	else
		return false;
}