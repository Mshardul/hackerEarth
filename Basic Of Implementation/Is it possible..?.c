#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, d, n, ind=0;
	char str[100];
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		ind = 0;
		scanf("%s", &str);
		while(str[ind++] != '\0');
		n = str[ind-2] - '0';
		d=n/2;
		// printf("%d, %d, %d, %c\n", ind, n, d, str[ind-2]);
		if(2*d == n)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}