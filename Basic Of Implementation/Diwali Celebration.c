#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, a, n, k;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &a);
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", a+(k*(n-1)));
	}
	return 0;
}