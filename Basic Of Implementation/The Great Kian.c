#include <stdio.h>
int main(int argc, char const *argv[])
{
	long n, arr[10000], out[3]={0,0,0}, temp;
	scanf("%ld", &n);
	for(int i=0; i<n; i++){
		scanf("%ld", &temp);
		out[(i%3)] += temp;
	}
	return 0;
}