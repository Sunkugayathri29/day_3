#include<stdio.h>
int main()
{
	int days,years,months,weeks,y,m,d;

	printf("days:");
	scanf("%d",&days);
	years=days/365;
	y=days%365;
	months=y/30;
	m=y%30;
	weeks=m/7;
	d=m/7;
	printf("days to years:%d\n",years);
	printf("months:%d\n",months);
	printf("weeks:%d\n",weeks);
	printf("remaining days:%d\n",d);

	return 1.2;
}
	