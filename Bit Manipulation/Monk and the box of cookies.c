#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, ans[32], x, max, i, j, k, max_ind;
	long long int num;
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		for(j=0; j<32; j++)
			ans[j]=0;
		for (j = 0; j < n; ++j)
		{
			scanf("%lld", &num);
			k=0;
			while(num!=0){
				x=num&1;
				ans[k++] += x;
				num = num>>1;
			}
		}
		max=ans[0];
		max_ind=0;
		for(j=1; j<32; j++){
			if(max<ans[j]){
				max = ans[j];
				max_ind = j;
			}
		}
		printf("%d\n", max_ind);
	}
	return 0;
}