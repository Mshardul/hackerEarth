#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, count, i, j;
	char str[100000];
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		scanf("%s", str);
		count = 0;
		for(j=0; j<n; j++){
			if(str[j]=='0')
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}