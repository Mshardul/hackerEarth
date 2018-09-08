# include <stdio.h>
# include <math.h>
int main(int argc, char const *argv[])
{
	int l, r, k, count=0;
	scanf("%d", &l);
	scanf("%d", &r);
	scanf("%d", &k);
	for(int i=l; i<=r; i++){
		if(i%k==0){
			count++;
		}
	}

	/* something wrong with this approach 
	int f = ceil(l/k);
	int s = floor(r/k);
	count = s-f+1;
	if(count<0){
		count = 0;
	}
	*/

	printf("%d\n", count);
	return 0;
}