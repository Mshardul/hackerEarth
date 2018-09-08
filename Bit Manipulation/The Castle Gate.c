#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, out, m, i, j, k;
	scanf("%d", &t);
	for ( i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		out=0;
		for(j=1; j<=n; j++){
			for(k=j+1; k<=n; k++){
				m = j^k;
				printf("%d, %d -> %d\n", j, k, m);
				if(m<=n){
					printf("%d, %d\n", j, k);
					out++;
				}
			}
		}
		printf("%d\n", out);
	}
	return 0;
}