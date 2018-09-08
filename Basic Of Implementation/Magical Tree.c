#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, i, j, out, p=1, max=0;
	char str[100], ch;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%s", &str);
		j=0;
		out = 0;
		ch = str[0];
		p=1;
		do{
			if(ch=='+')
				p=1;
			else if(ch=='-')
				p=0;
			else
				if(p==0)
					out -= (ch-'0');
				else
					out += (ch-'0');
			ch = str[++j];
		}while(ch!='\0');
		if(out>max)
			max=out;
	}
	printf("%d\n", max);
	return 0;
}