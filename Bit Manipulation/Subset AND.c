#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, t, found, j;
	long z, temp;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%ld", &z);
		scanf("%d", &n);
		found=0;
		for (j = 0; j < n; ++j)
		{
			scanf("%ld", &temp);
			z = z&temp;
			if (!z)
			{
				found=1;
			}
		}
		if(!found)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}