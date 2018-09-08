#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	long temp, mn, mx;
	scanf("%d", &n);
	scanf("%ld", &temp);
	mn=temp;
	mx=temp;
	for(int i=1; i<n; i++){
		scanf("%ld", &temp);
		if(temp>mx){
			mx=temp;
		}
		if (temp<mn){
			mn=temp;
		}
	}
	printf("%ld, %ld\n", mn, mx);
	printf("%ld\n", (mn+mx));
	return 0;
}