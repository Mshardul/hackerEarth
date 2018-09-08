#include <stdio.h>

int main(int argc, char const *argv[])
{
	int temp;
	long n, i, max=0, arr[26];
	char str[100000];

	for(temp=0; temp<26; temp++)
		arr[temp]=0;
	scanf("%ld", &n);
	scanf("%s", str);
	for (i = 0; i < n; ++i)
	{
		temp = (int)(str[i]-'a');
		arr[temp]+=1;
	}
	for(temp=0; temp<26; temp++){
		if(arr[temp]>max)
			max=arr[temp];
	}
	printf("%ld\n", (n-max));
	return 0;
}