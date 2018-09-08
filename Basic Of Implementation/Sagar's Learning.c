#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, i, j, fact, n;
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		if(n<3){
			printf("-1\n");
			continue;
		}
		fact = n/3;
		printf("%d %d %d\n", fact, fact*2, fact*3);
	}
	return 0;
}