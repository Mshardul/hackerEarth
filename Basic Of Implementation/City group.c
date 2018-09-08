#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, k, q, arr[100000], gno, mn = 10000, mx = 0, a, b, diff2, diff1, cno, j;
	scanf("%d", &n);
	scanf("%d", &k);
	while(j<k){
		scanf("%d", &gno);
		for (int i = 0; i < gno; ++i)
		{
			scanf("%d", &cno);
			arr[cno] = j;
		}
		j++;
	}
	scanf("%d", &q);
	while(q>0){
		scanf("%d", &a);
		scanf("%d", &b);
		a=arr[a];
		b=arr[b];
		if(a>b){
			j=a+b;
			a=j-a;
			b=j-b;
		}
		diff1=(k-b)+(a);
		diff2=(b-a);
		printf("%d, %d, %d, %d\n", a, b, diff1, diff2);
		if(diff2<diff1)
			printf("%d\n", diff2);
		else
			printf("%d\n", diff1);
		q--;
	}
	return 0;
}