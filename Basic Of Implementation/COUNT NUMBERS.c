#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, num=0, out=0;
	char ch;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		out=0;
		num=0;
		scanf("%d", &n);
		for (int j = 0; j <= n; ++j)
		{
			scanf("%c", &ch);
			if(ch>='0' && ch<='9'){
				if(num==0){
					out++;
					// printf("num : %c\n", ch);
				}
				num=1;
			}
			else{
				num=0;
			}
		}
		printf("%d\n", out);
	}
	return 0;
}