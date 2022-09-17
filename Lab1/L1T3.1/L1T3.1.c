#include <stdio.h>
int main()
{
	int r, a;

	printf("input radius:");
	scanf_s("%d", &r);
	if (r <= 0) {
		printf("wrong radius");
		return 0;
	}

	printf("input side:");
	scanf_s("%d", &a);
	if (a <= 0) {
		printf("wrong side");
		return 0;
	}

	if (a >= 2 * r)
		printf("circle fit in a square");
	else if (a < 2 * r)
		printf("circle not fit in a square");
}