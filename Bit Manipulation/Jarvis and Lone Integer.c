#include <stdio.h>

void mergeSort(int a[100000], int l, int r){
	if(l<r){
		int mid=(l+r)/2;
		mergeSort(a,l,mid);
		mergeSort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}
void merge(int a[100000], int l, int m, int r){
	int i, j, k, n1, n2;
	long long int temp[r-l+1];
	
}
int main(int argc, char const *argv[])
{
	int t, n, j, found, k;
	long long int a[100000], temp;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		j=0;
		while(j<n){
			scanf("%llu", &temp);
			found=0;
			for(k=0;k<j;k++){
				if(!(a[k]^temp)){
					found=1;
					a[k]=0;
				}
			}
			if(found==0)
				a[j++]=temp;
			else
				n--;
		}
		found=0;
		while(j>=0){
			if(a[j]!=0){
				printf("%llu\n", a[j]);
				found=1;
			}
			j--;
		}
		if(!found)
			printf("-1\n");
	}
	return 0;
}