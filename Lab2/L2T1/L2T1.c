#include <stdio.h>

int main()
{
    float a;
	printf("input a:");
	scanf_s("%f", &a);

	int n = 0; float i = 0;
	while ( i < a) {
		i += 1.00 / ++n;
	}

	printf("n:%d\n", n);
}