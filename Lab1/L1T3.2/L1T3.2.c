#include <stdio.h>
#include <math.h>

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

	if (a*sqrtl(2) >= 2 * r)
		printf("square not fit in a circle");
	else if (a * sqrtl(2) <= 2 * r)
		printf("square fit in a circle");
}