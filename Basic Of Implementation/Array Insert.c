# include <stdio.h>
int main(int argc, char const *argv[])
{
	int q, ch, l, r;
	int arr[100000];
	long n;
	scanf("%ld", &n);
	scanf("%d", &q);
	for(long i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<q; i++){
		scanf("%d", &ch);
		scanf("%d", &l);
		scanf("%d", &r);
		if(ch==1){
			arr[l] = r;
		}
		else{
			int sum=0;
			for(int j=l; j<=r; j++){
				sum+=arr[j];
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}