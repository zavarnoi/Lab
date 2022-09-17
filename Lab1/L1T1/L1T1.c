#include <stdio.h>
int stp(int q, int n)
{
	int p = q;
	for (int i = 1; i < n; i++)
		p *= q;
	return p;
}


int main()
{

	int b, q, n;
	printf("input b=");
	scanf_s("%d", &b);

	printf("input q=");
	scanf_s("%d", &q);
	if (q == 1)
	{
		printf("wrong q");
		return 0;
	}

	printf("input n=");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("wrong n");
		return 0;
	}

	printf("sum=%d", b * (1 - stp(q, n)) / (1 - q));

}
