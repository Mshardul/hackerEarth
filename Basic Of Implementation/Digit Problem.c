#include <stdio.h>

int main(int argc, char const *argv[])
{
	int k, i;
	char x[18], ch;
	scanf("%s", &x);
	scanf("%d", &k);
	for (i = 0; i < k; ++i)
	{
		if(x[i]=='9')
			k++;
		else
			x[i]='9';
	}
	ch=x[0];
	i=0;
	while(ch!='\0'){
		printf("%d", ch-'0');
		ch=x[++i];
	}
	return 0;
}