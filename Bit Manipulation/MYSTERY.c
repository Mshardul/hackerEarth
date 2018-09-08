#include <stdio.h>

int main(int argc, char const *argv[])
{
	long long int n, temp, ans;
	while(scanf("%lld", &n)==1){
		temp=0;
		if(n==0)
			ans=0;
		else{
			ans=1;
			while((n&1)!=1){
				ans*=2;
				n=n>>1;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}