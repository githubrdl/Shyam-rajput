/*
4.WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area 
& R with radius.*/
#include<stdio.h>
int main()
{
	int a,r;
	float pi=3.14;
	printf("Enter the radius\n");
	scanf("%d",&r);
	a=pi*r*r;
	printf(" Area of circle = %d",a);
	return 0;
	
	
}
