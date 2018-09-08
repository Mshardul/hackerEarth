#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	char s[100], ch, str[100];
	int q, m, ind, a, b, out=0, i, mid, temp, n;
	scanf("%s", s);
	n = strlen(s);
	scanf("%d", &q);
	while(q>0){
		scanf("%d", &ind);
		scanf("%c", &ch); // for space-seperated input
		scanf("%c", &ch);
		// printf("%d \'%c\' \"%s\"\n", ind, ch, s);
		s[ind-1] = ch;
		q--;
	}
	for(i=0; i<n; i++)
		str[i] = s[i];
	printf("%s\n", s);
	scanf("%d", &m);
	while(m>0){
		scanf("%d", &a);
		scanf("%d", &b);
		a--;
		b--;
		mid = (a+b)/2;
		i=0;
		while(i<=(mid-a)){
			if(s[a+i]!=s[b-i]){
				temp = s[a+i];
				s[a+i] = s[b-i];
				s[b-i] = temp;
			}
			i++;
		}
		// printf("%s\n", s);
		m--;
	}
	printf("%s\n", s);
	for (i = 0; i < n; ++i)
	{
		if(s[i]==str[i])
			out+=1;
	}
	printf("%d\n", out);
	return 0;
}