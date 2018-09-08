#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, i, j, l, day;
	long k, a[7], per_week=0, temp, rem_for_week;
	scanf("%d", &t);
	for (i = 0; i < t; ++i)
	{
		per_week = 0;
		scanf("%ld", &k);
		for (j = 0; j < 7; ++j)
		{
			scanf("%ld", &temp);
			per_week += temp;
			a[j] = temp;
			if(temp!=0)
				day = j;
		}
		rem_for_week = k % per_week;
		printf("%ld\n", rem_for_week);
		if(rem_for_week>0){
			l=0;
			while(rem_for_week>0){
				rem_for_week = rem_for_week-a[l++];
				printf("%ld, %d, %ld\n", rem_for_week, l, a[l]);
			}
			day = l-1;
		}
		printf("%d\n", day);
		switch(day){
			case 0: printf("MONDAY\n"); break;
			case 1: printf("TUESDAY\n"); break;
			case 2: printf("WEDNESDAY\n"); break;
			case 3: printf("THURSDAY\n"); break;
			case 4: printf("FRIDAY\n"); break;
			case 5: printf("SATURDAY\n"); break;
			case 6: printf("SUNDAY\n"); break;
		}
	}
	return 0;
}