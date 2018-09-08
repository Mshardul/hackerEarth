#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	long res=0, j=0, n;
	char str[100000], ch;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		res=0;
		scanf("%s", &str);
		n=0;
		do{
			ch=str[++n];
		}while(ch!='\0');
		printf("n = %ld\n", n);
		while(n>0){
			res+=n;
			n--;
		}
		printf("res = %ld\n", res);
	}
	return 0;
}