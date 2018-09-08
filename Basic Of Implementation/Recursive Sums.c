#include <stdio.h>

long getSingleDig(long n){
	long sum = 0;
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	if(sum<10)
		return sum;
	return getSingleDig(sum);
}

int main(int argc, char const *argv[])
{
	int t, m, d;
	long len, sum, temp;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &m);
		sum = 0;
		for (int j = 0; j < m; ++j)
		{
			scanf("%ld", &len);
			scanf("%d", &d);
			temp = len*d;
			temp = getSingleDig(temp);
			sum += temp;
		}
		sum = getSingleDig(sum);
		printf("%ld\n", sum);
	}
	return 0;
}



'''

#include <stdio.h>

long getSingleDig(long n){
	long sum = 0;
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	if(sum<10)
		return sum;
	return getSingleDig(sum);
}

int MultByInt(char str[15], int n, int i){
	long x=0;
	int temp, carry=0;
	while(i>0){
		temp = ((str[--i]-'0')*n)+carry;
		carry = temp/10;
		temp = temp%10;
		x += temp;
		printf("%d: %d %d %ld\n", i, temp, carry, x);
	}
	return(getSingleDig(x+carry));
}

int main(int argc, char const *argv[])
{	
	int t, m, d, temp, sum, n;
	char len[15];
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &m);
		sum = 0;
		for (int j = 0; j < m; ++j)
		{
			scanf("%d", &len);
			scanf("%s", d);
			printf("%s\n", len);
			n=0;
			while(len[n++]!='\0');
			temp = MultByInt(len, d, n-1);
			sum += temp;
		}
		sum = getSingleDig(sum);
		printf("%d\n", sum);
	}

	// printf("%d\n", MultByInt("598", 9));


	return 0;
}
'''
