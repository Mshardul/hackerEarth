#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t, i;
	long d, a, m, b, x, out=0, j, done=0, days=0, tot=0, comp=0;
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		scanf("%ld %ld %ld %ld %ld", &d, &a, &m, &b, &x);
		done=0; 			//if we reached the given amount
		days=0; 			//days taken to reach the given amount
		out=0; 				//amount till date
		x -= d;
		tot=(m*a)+b;		//amount in (m+1) days
		comp=x/tot; 		//set of (m+1) days, required

		x -= (comp*tot);

		days = x/a;
		if(days*a!=x)
			days++;

		days += (comp*(m+1));
		printf("%ld\n", days);
	}
	return 0;
}