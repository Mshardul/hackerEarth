#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t, n, out=0;
	scanf("%d", &t);
	while(t>0){
		scanf("%d", &n);
		if(n>0)
			out+=n;
		t--;
	}
	printf("%d\n", out);
	return 0;
}