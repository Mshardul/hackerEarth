# include <stdio.h>

int main()
{
	int n, h2=0, a2=0, c=0, k=0, e2=0, r2=0, t=0, h, a, e, r, min;
	char ch;
	scanf("%d", &n);
	for (int i = 0; i <= n; ++i)
	{
		scanf("%c", &ch);
		// printf("%c\n", ch);
		if(ch=='h')
			h2++;
		else if(ch=='a')
			a2++;
		else if(ch=='c')
			c++;
		else if(ch=='k')
			k++;
		else if(ch=='e')
			e2++;
		else if(ch=='r')
			r2++;
		else if(ch=='t')
			t++;
	}
	// printf("%d: %d, %d, %d, %d, %d, %d, %d, %d\n", h2, h, a, c, k, e, r, t, min);

	if(c<k){
		if(c<t)
			min=c;
		else
			min=t;
	}
	else{
		if(k<t)
			min=k;
		else
			min=t;
	}

	h = h2/2;
	a = a2/2;
	e = e2/2;
	r = r2/2;

	// printf("%d: %d, %d, %d, %d, %d, %d, %d, %d\n", h2, h, a, c, k, e, r, t, min);
	if(h<min)
		min=h;
	if(a<min)
		min=a;
	if(e<min)
		min=e;
	if(r<min)
		min=r;

	// out = min(min(min(min(min(min(h,a), c), k), e), r), t);
	printf("%d\n", min);
	return 0;
}