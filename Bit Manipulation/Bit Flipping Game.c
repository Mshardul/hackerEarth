#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, s, arr[1000000], count, j;
	char temp[1000000]={0}, ch;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%s", temp);
		j=0;
		ch=temp[j];
		while(ch!='\0'){
			if(arr[j]==0){
				if(ch=='1'){
					arr[j]=1;
					count++;
				}
			}
			ch=temp[++j];
		}
	}
	if(count%2==0){
		printf("B\n");
	}
	else{
		printf("A\n");
	}
	printf("%d\n", count);
}


'''
#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
int last_move = 0;
char solve (char** Number,int N) {
   // Return character A from this function if player A is winner. Return
   // character B from this function if player B is winner. Also set the
   // value of global variable last_move to the last move number of the
   // player who is winner in the game
   // Number[i] is the string value in ith line starting from 0 till n - 1
}

int main() {
    int N;
    scanf("%d", &N);
    int i_Number;
    char **Number=(char **)malloc(sizeof(char *));
    for(i_Number=0; i_Number<N; i_Number++)
    {
    	Number[i_Number]=(char *)malloc(512000 * sizeof(char));
    	scanf(" %s", Number[i_Number]);
    }

    char out_ = solve(Number , N);
    printf("%c\n", out_);
    printf("%d" , last_move);
}
'''