
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, dec, prm, ans, less, more, i, j;
	char str[500];
	char out[500];
	char ch;
	// int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127};
	int prime[] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113}; //ONLY FOR ALPHABETS
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d", &n);
		scanf("%s", &str);
		out[0]='\0';
		for(j=0; str[j]!='\0'; j++){
			ch = str[j];
			dec = (int)ch;
			if(dec>113){
				out[j] = 113;
				continue;
			}
			for(int k=0; k<31; k++){
				prm = prime[k];
				if(prm>dec){
					if(k==0){
						ans=prm;
					}
					else{
						less = dec - prime[k-1];
						more = prm - dec;
						if(less<=more){
							ans=prime[k-1];
						}
						else{
							ans=prime[k];
						}
					}
					out[j] = ans;
					break;
				}
			}
		}
		out[j]='\0';
		printf("%s\n", out);
	}
	return 0;
}