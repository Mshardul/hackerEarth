#include <stdio.h>
int main(int argc, char const *argv[])
{
	int out[26], t, i, j, res, k;
	char str[100000], ch;
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%s", str);
		j=0;
		res=0;
		ch=str[j++];
		while(ch!='\0'){
			out[(ch-'a')] = 1;
			ch=str[j++];
		}
		for (k = 0; k < 26; ++k)
		{
			res+=out[k];
			out[k]=0;
		}
		if(res%2==0)
			printf("Player2\n");
		else
			printf("Player1\n");
	}
	return 0;
}