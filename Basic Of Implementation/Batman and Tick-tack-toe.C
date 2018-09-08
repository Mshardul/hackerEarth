# include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch, arr[4][4], str[4];
	int t, i, j, k, len_x, len_o, win;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		len_x=0;
		len_o=0;
		for(j=0; j<4; j++){
			scanf("%s", &str);
			for(k=0;k<4;k++){
			    arr[j][k]=str[k];
				if(str[k]=='X'){
					len_x++;
				}
				else{
					if(str[k]=='O'){
						len_o++;
					}
				}
			}
			if(len_x==len_o){
				ch = 'X';
			}
			else{
				ch = 'O';
			}
			
		}
		win=0;
		// if(arr[1][1]==ch && arr[2][2]==ch){
		// 	if((arr[0][0]==ch && arr[1][1]==ch && arr[2][2]==ch && arr[3][3]==ch) || (arr[0][3]==ch && arr[1][2]==ch && arr[2][1]==ch && arr[3][0]==ch)){
		// 		win=1;
		// 	}
		// }
		// if(win==0){
		// 	for(j=0; j<3; j++){
		// 		if(arr[j][0]==ch && arr[j][1]==ch && arr[j][2]==ch && arr[j][3]==ch){
		// 			win=1;
		// 			break;
		// 		}
		// 		if(arr[0][j]==ch && arr[1][j]==ch && arr[2][j]==ch && arr[3][j]==ch){
		// 			win=1;
		// 			break;
		// 		}
		// 	}
		// }
		if(win==1){
			printf("%d, YES\n",t);
		}
		else{
			printf("%d, NO\n",t);
		}
	}
	return 0;
}