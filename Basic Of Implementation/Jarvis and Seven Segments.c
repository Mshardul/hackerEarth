#include <stdio.h>

int get_light(int n){
	int m=n;
	int d, r, ans=0;
	if(n==0)
		ans=6;
	while(m>0){
		r = m%10;
		m /= 10;
		if(r==0 || r==6 || r==9)
			ans += 6;
		else if(r==1)
			ans += 2;
		else if(r==2 || r==3 || r==5)
			ans += 5;
		else if(r==4)
			ans += 4;
		else if(r==7)
			ans += 3;
		else if(r==8)
			ans += 8;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int t, temp_num, temp_light, min_num, min_light, n;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		scanf("%d", &min_num);
		min_light = get_light(min_num);
		printf("%d: %d\n", min_num, min_light);
		for (int j = 1; j < n; ++j)
		{
			scanf("%d", &temp_num);
			temp_light = get_light(temp_num);
			if(temp_light<min_light){
				min_num = temp_num;
				min_light = temp_light;
			}
			printf("%d: %d\n", temp_num, temp_light);
		}
		printf("%d\n", min_num);
	}
	return 0;
}