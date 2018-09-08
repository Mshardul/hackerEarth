#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, m, temp;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		scanf("%d", &m);
		temp = m/n;
		if(temp*n == m)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}