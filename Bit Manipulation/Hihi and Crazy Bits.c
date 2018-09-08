#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, ones;
	long long int n;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%llu", &n);
		ones = 0;
		while((n&1)==1){
			ones++;
			n = n>>1;
		}
		n=n|1;
		while(ones>0){
			n=n<<1;
			n=n|1;
			ones--;
		}
		printf("%llu\n", n);
	}
	return 0;
}