#include <stdio.h>

int main() 
{
	int n;
	printf("input n:");
	scanf_s("%d", &n);

	int s = 0, p=1;
	for (int i = 1; i <= n; i++){
		if (i % 3 == 0){
			p *= i;
			s += i;
		}
	}
	printf("prod:%d\n", p);
	printf("sum:%d\n", s);
}
