#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, i, j, k;
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		for (j = 1; j <= n; ++j)
		{
			for (k = 0; k < n-j; ++k)
			{
				printf(" ");
			}
			printf("*");
			for (k = 1; k < j; ++k)
			{
				printf("**");
			}
			printf("\n");
		}
	}
	return 0;
}