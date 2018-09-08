#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int t, sum, i, j, n;
	char str[10000];
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%s", &str);
		n = strlen(str);
		for (j = 0; j < n; ++j)
		{
			sum = (str[j]-'a')+(str[n-1-j]-'a')+1;
			// printf("%d", sum);
			sum = sum%26;
			printf("%c", (char)sum+'a');
		}
		printf("\n");
	}
	return 0;
}