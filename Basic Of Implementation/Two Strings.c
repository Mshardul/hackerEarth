# include <stdio.h>
# include <string.h>

int main(int argc, char const *argv[])
{
	char s1[100000];
	char s2[100000];
	int t, n, m, done, same;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%s", s1);
		scanf("%s", s2);
		same = 1;
		n = strlen(s1);
		m = strlen(s2);
		if(n!=m){
			printf("NO\n");
			continue;
		}
		for(int j=0; j<n; j++){
			done=0;
			for(int k=0; k<n; k++){
				if(s1[j]==s2[k]){
					s1[j]='0';
					s2[k]='0';
					done=1;
					break;
				}
			}
			if(done==0){
				same = 0;
				break;
			}
		}
		for (int j=0; j<n; j++){
			if(s1[j]!='0' || s2[j]!='0'){
				printf("NO\n");
				same = 0;
				break;
			}
		}
		if(same==1){
			printf("YES\n");
		}

	}
	return 0;
}