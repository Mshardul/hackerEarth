#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int t, arr[26], j=0, found, temp;
	char s1[100000], s2[100000], ch;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		for(j=0; j<26; j++)
			arr[j]=0;

		found=0;
		scanf("%s", s1);
		scanf("%s", s2);

		j=0;
		ch=s1[j];
		while(ch!='\0'){
			temp=ch-'a';
			arr[temp]=1;
			ch=s1[++j];
		}

		j=0;
		ch=s2[j];
		while(ch!='\0'){
			temp=ch-'a';
			if(arr[temp]>0){
				printf("Yes\n");
				found=1;
				break;
			}
			ch=s2[++j];
		}

		if(found==0)
			printf("No\n");
	}
	return 0;
}