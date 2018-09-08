# include <stdio.h>
# include <string.h>
int main(int argc, char const *argv[])
{
	char s[10000], ch;
	int n, ascii, l;
	gets(s);
	scanf("%d", &n);
	l = strlen(s);
	for(int i=0; i<l; i++){
		ch = s[i];
		printf("%c", ch);
		ascii = (int)ch;
		printf(" = %d ", ascii);
		if(ch>=65 && ch<=90){
			ascii = ((ascii+4-65)%26)+65;
			ch = (char)ascii;
		}
		else if(ch>=97&&ch<=122){
			ascii = ((ascii+4-97)%26)+97;
			ch = (char)ascii;
		}
		else if(ch>=48 && ch<=57){
			ascii = ((ascii+4-48)%10)+48;
			ch = (char)ascii;
		}
		printf("changes to %c\n", ch);
		s[i] = ch;
	}
	// printf("%s\n", s);
	return 0;
}