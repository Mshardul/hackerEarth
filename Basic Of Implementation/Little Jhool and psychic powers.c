#include <stdio.h>

int main(int argc, char const *argv[])
{
	char bin[100], ch,ch_prev;
	int i=0,c=0, out=0;
	ch=bin[0];
	scanf("%s", &bin);
	do{
		ch_prev=ch;
		ch=bin[++i];
		if(ch!=ch_prev)
			c=0;
		else
			c+=1;
		if(c==5){
			out=1;
			break;
		}
		// printf("%d, %c, %c, %d\n", i, ch_prev, ch, c);
	}while(ch!='\0');
	if(out==0)
		printf("Good luck!\n");
	else
		printf("Sorry, sorry!\n");
	return 0;
}