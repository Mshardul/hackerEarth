#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[100], ch;
	int n=0;
	scanf("%s", str);
	ch=str[n];
	while(ch!='\0'){
		ch=str[++n];
	}
	printf("%d\n", n);
	return 0;
}