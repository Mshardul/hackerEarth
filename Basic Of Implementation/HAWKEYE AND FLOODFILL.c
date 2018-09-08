#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	long i, j, p, p_cell, p_i, p_j, min, arr[1000][1000];
	scanf("%d", &n);
	scanf("%ld", &i);
	scanf("%ld", &j);
	scanf("%ld", &p);
	for(int r=0; r<n; r++){
		for(int c=0; c<n; c++){
			if(i>r)
				p_i = p-(i-r);
			else
				p_i = p-(r-i);
			if(j>c)
				p_j = p-(j-c);
			else
				p_j = p-(c-j);
			if(p_i>p_j)
				min = p_j;
			else
				min = p_i;
			if(min<0)
				min=0;
			arr[r][c] = min;
		}
	}
	for(int r=0; r<n; r++){
		for(int c=0; c<n; c++)
			printf("%ld ", arr[r][c]);
		printf("\n");
	}

	return 0;
}