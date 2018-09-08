#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, x, y, temp, out=1;
	scanf("%d", &n);
	scanf("%d", &x);
	scanf("%d", &y);
	for(int i=0; i<n; i++){
		scanf("%d", &temp);
		if(temp>x || temp<y){
			out=0;
			break;
		}
	}
	if(out==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}