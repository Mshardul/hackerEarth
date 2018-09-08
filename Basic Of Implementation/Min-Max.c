#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, arr[100], out[100], temp, min, max, res=1, ind, diff;
	scanf("%d", &n);

	scanf("%d", &temp);
	arr[0] = temp;
	min = temp;
	max = temp;
	
	for (int i = 1; i < n; ++i)
	{
		scanf("%d", &temp);
		if(temp<min)
			min=temp;
		if(max<temp)
			max=temp;
		arr[i] = temp;
	}

	diff=max-min;

	for(int i=0; i<=diff; i++){
		out[i] = 0;
	}

	for (int i = 0; i <= n; ++i)
	{
		ind = arr[i]-min;
		if(ind<0)
			continue;
		out[ind]=1;
	}
	
	for(int i=0; i<=diff; i++){
		if(out[i]==0)
			res=0;
	}

	if(res==1)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}