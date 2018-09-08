#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, out[100][2], cons_zero=0, curr=0, prev=0, temp, ind=0, tot_1=0, sum=0, max=0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &temp);
		if(temp==0){
			if(cons_zero==0){
				if(prev!=0){
					if(ind==0){
						out[ind][0]=prev;
						out[ind++][1]=curr;			
					}
					else{
						if(out[ind-1][0]!=prev || out[ind-1][1]!=curr){
							out[ind][0]=prev;
							out[ind++][1]=curr;
						}
					}
				}
				prev=curr;
				curr=0;
				cons_zero=1;
			}
			else{
				prev=0;
				curr=0;
			}
		}
		else{
			cons_zero=0;
			curr++;
			tot_1++;
		}
	}
	if(prev!=0 && (out[ind-1][0]!=prev || out[ind-1][1]!=curr)){
		out[ind][0]=prev;
		out[ind++][1]=curr;
	}
	ind--;
	while(ind>=0){
		curr = out[ind][0];
		prev = out[ind][1];
		printf("%d: %d %d %d %d ", ind, curr, prev, tot_1, max);
		sum = curr+prev;
		if(sum==tot_1){
			printf("in if ");
			if(curr>prev)
				sum=curr+1;
			else
				sum=prev+1;
		}
		else
			sum++;
		if(sum>max)
			max=sum;
		// printf("%d %d\n", sum, max);
		ind--;
	}
	printf("%d\n", max);
	return 0;
}