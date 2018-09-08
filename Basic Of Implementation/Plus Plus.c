#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, m, a[50][50], i, j, sum, mx=0, out[2500][2], count, r1, r2, c1, c2, s1, s2, rd, cd;
	scanf("%d", &n);
	scanf("%d", &m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}

	// for(i=0; i<n; i++){
	// 	for(j=0; j<m; j++){
	// 		printf("%d", a[i][j]);
	// 	}
	// 	printf("\n");
	// }

	count=0;
	for(i=1; i<n-1; i++){
		for(j=1; j<m-1; j++){
			out[count][0]=i;
			out[count++][1]=j;
		}
	}

	// for (int i = 0; i < count; ++i)
	// {
	// 	printf("%d %d\n", out[i][0], out[i][1]);
	// }
	for(i=0; i<count; i++){
		for (j=i+1; j<count; j++)
		{
			sum=0;

			r1 = out[i][0];
			c1 = out[i][1];

			r2 = out[j][0];
			c2 = out[j][1];

			rd = abs(r1-r2);
			cd = abs(c1-c2);

			if(rd==1){
				if(cd<2)
					continue;
			}
			else if(rd==0){
				if(cd<=2)
					continue;
			}
			else if(rd==2){
				if(cd==0)
					continue;
			}

			sum = (a[r1][c1]*a[r2][c2]) + (a[r1-1][c1]*a[r2-1][c2]) + (a[r1+1][c1]*a[r2+1][c2]) + (a[r1][c1-1]*a[r2][c2-1]) + (a[r1][c1+1]*a[r2][c2+1]);
			if(sum>mx)
				mx=sum;
			// printf("%d, %d, %d, %d, %d, %d\n", r1, c1, r2, c2, sum, mx);
		}
	}
	printf("%d\n", mx);
	return 0;
}