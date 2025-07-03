#include<stdio.h>
int main()
{
	float length,breadth,Area,perimeter;

	printf("Enter the value of length:");
	scanf("%f",&length);

	printf("Enter the value of breadth:");
	scanf("%f",&breadth);

	Area=length*breadth;
	printf("Area of rectangle:%f\n",Area);

	perimeter=2*(length+breadth);
	printf("Perimeter of rectangle:%f",perimeter);

	return 1.2;
}
