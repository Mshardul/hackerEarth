#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	long temp, sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &temp);
		sum += temp;
	}
	printf("%d\n", sum);
	return 0;
}