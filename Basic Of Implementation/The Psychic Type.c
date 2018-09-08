#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, arr[1000], i, s, e, currInd, found=0, j;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	j=0;
	scanf("%d", &s);
	scanf("%d", &e);
	if(s==e)
		found=1;
	currInd = s-1;
	while(j<n && found==0){
		if(arr[currInd]==e){
			found = 1;
			break;
		}
		// printf("%d -> %d\n", );
		currInd = arr[currInd] - 1;
		j+=1;
	}
	if (found)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}