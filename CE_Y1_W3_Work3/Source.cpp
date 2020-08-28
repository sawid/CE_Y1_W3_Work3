#include <stdio.h>

int main() {
	int n,m = 1;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("*");
		}
		printf("\n");
		m++;
	}
}