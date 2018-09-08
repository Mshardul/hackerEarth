# include <stdio.h>

int main(int argc, char const *argv[])
{
	long n, q, tot, avg, l, r;
	scanf("%ld", &n);
	scanf("%ld", &q);
	long a[1000000];
	for(long i=0;i<n; i++){
		scanf("%ld", &a[i]);
	}
	for (long i=0; i<q; i++){
		scanf("%ld", &l);
		scanf("%ld", &r);
		tot = 0;
		for(long j=l; j<=r; j++){
			tot+=a[j-1];
		}
		avg = tot/(r-l+1);
		printf("%d\n", avg);
	}
	return 0;
}