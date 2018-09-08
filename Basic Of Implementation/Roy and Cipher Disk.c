#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, val, i, j;
	char str[100], ch, prev;
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%s", str);
		ch=str[0];
		j=0;
		prev = 'a';
		while(ch!='\0'){
			val = ch-prev;
			if(val<-12)
				val = 26+val;
			else {
				if(val>13){
					val = -26+val;
				}
			}
			printf("%c -> %c: %d\n", prev, ch, val);
			prev = ch;
			ch = str[++j];
		}
		printf("\n");
	}
	return 0;
}