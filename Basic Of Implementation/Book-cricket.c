#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, p, i, j, p1, p2, runs[11]={0,0,0,0,0,0,0,0,0,0,0}, max, balls;
	char str[60000], ch, out[100];
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		scanf("%d", &p);
		scanf("%s", str);
		j = 0;
		ch = str[j];
		p1 = 0;
		p2 = 1;
		max = 1;
		balls=0;
		while(ch!='\0'){
			if (ch=='W'){
				p1 = max+1;
			}
			else if(ch=='1'){
				runs[p1]+=1;
				p1 = p2+p1;
				p2 = p1-p2;
				p1 = p1-p2
			}
			else{
				runs[p1]+=(int)ch;
			}
			balls+=1;
			if(balls==6){
				balls=0;
				p1 = p2+p1;
				p2 = p1-p2;
				p1 = p1-p2
			}
		}
		for (int j = 0; j < max; ++j)
		{
			out="Player ";
			strcat(out, (char)j)
			if(j==p1 || j==p2)
				strcat(out, "*");
			strcat()
		}
	}
	return 0;
}