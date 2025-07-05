

#include<stdio.h>
int main()
{
	int days,hours,minutes,seconds,h,m,d;
	
	printf("days:");
	scanf("%d",&days);
	hours=days/24;
	h=days%24;
	minutes=h/60;
	m=h%60;
	seconds=m/60;
	d=m/60;
	printf("days to hours:%d\n",hours);
	printf("minutes:%d\n",minutes);
	printf("seconds:%d\n",seconds);
	printf("remaining days:%d\n",d);

	return 1;
}

	