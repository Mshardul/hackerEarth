#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, out;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		out=0;
		while(n>0){
			out += n&1;
			n=n>>1;
		}
		printf("%d\n", out);
	}
	return 0;
}