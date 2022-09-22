#include <stdio.h>

float stp_x(float x, int i) {
	float p = x;
	for (int j = 1; j < i; j++)
		p *= x;
	return p;
}

int main() {
	float x, S = 0; int n;
	printf("input n:");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("wrong n");
		return 0;
	}
	printf("input x:");
	scanf_s("%f", &x);
	int N = 2 * n + 1;

	int min;
	if (n % 2 == 0)  min = 1;
	else min = -1;

	for (int i = 3; i <= N; i++) {
		if (i % 2 != 0) {
			int fact = 1, f;
			for (f = 1; f <= i; f++)
				fact = fact * f;
			S += min * stp_x(x, i) / fact;
		}
	}
	S = x + S;
	printf("%f", S);
}
