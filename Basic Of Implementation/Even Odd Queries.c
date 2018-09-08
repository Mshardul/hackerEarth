#include <stdio.h>

int gcd(int a, int b){
	if(a==0)
		return b;
	return(gcd(b%a, a));

}
int main(int argc, char const *argv[])
{
	int t, n, q, k, l, r, i, j, fav, tot, m, arr[10000];
	long temp;
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		scanf("%d", &q);
		fav = 0;
		tot = 0;
		for (j = 0; j < n; ++j)
		{
			scanf("%ld", &temp);
			arr[j]=temp%2; //0-even; 1-odd
		}
		for (j = 0; j < q; ++j)
		{
			scanf("%d", &k);
			scanf("%d", &l);
			scanf("%d", &r);
			l--;
			fav = 0;
			tot = r-l;
			if(k==1){
				while(l<r){
					fav += arr[l++];
				}
			}
			else{
				while(l<r){
					if(arr[l++]==0)
						fav++;
				}
			}
			if(fav==0)
				printf("0\n");
			else{
				if(fav==tot)
					printf("1\n");
				else{
					m=gcd(fav, tot);
					printf("%d %d\n", fav/m, tot/m);
				}
			}
		}
	}
	return 0;
}