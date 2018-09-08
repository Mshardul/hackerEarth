#include <stdio.h>

char[] print_div(char n[], char ans[], int ind, int len, int div){
	if(ind==len)
		return "0";
	int div = div*10 + ans[ind];
	ans[ind] = div/3;
	div = div%3;
	ans = print_div(n, ans, ind+1, len, div)
	return ans;
}
