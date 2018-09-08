#include <stdio.h>
int printArr(int arr[], int n){
	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);
}

int getNextInd(int arr[], int ind, int n){
	int i=(ind+1)%n;
	while(i<n){
		if(arr[i]==0)
			return i;
		i+=1;
	}
	i=0;
	while(i<ind){
		if(arr[i]==0)
			return i;
		i+=1;
	}
}

int main(int argc, char const *argv[])
{
	int n, k, x, m, ind, arr[1000], to_del, ele;
	scanf("%d", &n);
	scanf("%d", &k);
	scanf("%d", &x);

	printf("%d %d %d\n", n, k, x);

	m=n;
	ind=x-1;

	for(int j=0; j<n; j++)
		arr[j]=0;

	do{
		printArr(arr, n);
		to_del = (ind+1)%k;
		printf("at %d: %d elements to delete\n", ind+1, to_del);
		while(to_del!=0){
			ind = (ind+1)%n;
			if(arr[ind]==0){
				arr[ind]=1;
				to_del--;
				m--;
				printf("%d deleted, %d remaining; total remains: %d\n", ind+1, to_del, m);
				if(m==1)
					break;
			}
		}
		ind = getNextInd(arr, ind, n);
		printf("%d selected next\n", ind+1);
	}while(m>1);


	printArr(arr, n);


	for(int j=0; j<n; j++){
		if(arr[j]==0){
			printf("%d\n", j+1);
			break;
		}
	}
	return 0;
}