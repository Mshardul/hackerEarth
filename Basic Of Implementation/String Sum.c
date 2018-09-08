#include <stdio.h>
int main(int argc, char const *argv[])
{
	char s[1000], ch;
	int ans=0, i=1;

	scanf("%s", s);
	ch = s[0];

	while(ch!='\0'){
		ans += ch-'a'+1;
		// printf("ch: %c; ans: %d\n", ch, ans);
		ch=s[i++];
	}
	printf("%d\n", ans);
	return 0;
}