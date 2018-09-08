# include <stdio.h>

int check(int l, int w, int h){
	if(w<l || h<l){
		printf("UPLOAD ANOTHER\n");
	}
	else{
		if(w==h){
			printf("ACCEPTED\n");
		}
		else{
			printf("CROP IT\n");
		}
	}
}

int main(int argc, char const *argv[])
{
	int l, n, w, h, i;
	scanf("%d", &l);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &w);
		scanf("%d", &h);
		check(l, w, h);
	}
	return 0;
}