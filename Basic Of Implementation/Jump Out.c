#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, temp, i, out=0;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &temp);
		if(temp>=(n-i) && out==0){
			printf("%d\n", (i+1));
			out=1;
		}
	}
	return 0;
}