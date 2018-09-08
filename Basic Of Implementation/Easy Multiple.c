'''
//basic approach
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	long n, ans, j;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%ld", &n);
		ans = 0;
		for (j = 0; j < n; ++j)
		{
			if(j%3==0 || j%5==0)
				ans += j;
		}
		printf("%ld\n", ans);
	}
	return 0;
}
'''


'''
//using dp

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	long n, ans, j, b_ind=1, b_ans[100000], k;
	scanf("%d", &t);
	b_ans[0]=0;
	for (int i = 0; i < t; ++i)
	{
		scanf("%ld", &n);
		ans = 0;
		if(n<b_ind)
			ans = b_ans[b_ind];
		j=b_ind;
		
		while(j<n){
			if(j%3==0 || j%5==0)
				b_ans[b_ind++] = b_ans[j-1]+j;
			else
				b_ans[b_ind++] = b_ans[j-1];
			j++;
		}

		printf("%ld\n", b_ans[n-1]);
	}
	return 0;
}

'''