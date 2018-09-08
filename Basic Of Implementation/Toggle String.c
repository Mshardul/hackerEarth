# include <stdio.h>
# include <string.h>

int main(int argc, char const *argv[])
{
	char s[100];
	scanf ("%s", s);
	int n = strlen(s);
	char c;
	for(int i = 0; i<n; i++){
		c=s[i];
		if(c>='A' && c<='Z'){
			s[i] = c+32;
		}
		else{
			if(c>='a' && c<='z'){
				s[i] = c-32;
			}
		}
	}
	printf("%s\n", s);
	return 0;
}