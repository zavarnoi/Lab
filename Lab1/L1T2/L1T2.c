#include <stdio.h>

int main()
{
	int a, b, c;
	printf("input a, b, c:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a + b == 0)
		printf("Answer:a,b");
	else if (b + c == 0)
		printf("Answer:b,c");
	else if (a + c == 0)
		printf("Answer:a,c");
	else
		printf("Answer:no");
}