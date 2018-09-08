#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n, arr[100], i, j, max, mx;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	max = 0;
	for(j=0; j<n; j++){
		for(i=j+1; i<n; i++){
			mx = arr[i]-arr[j];
			if(mx>max)
				max=mx;
		}
	}
	printf("%d\n", max);
	return 0;
}