#include<stdio.h>

int main() {
	float length, breadth, area;

	printf("Enter the length: ");
	scanf("%f", &length);

	printf("Enter the breadth: ");
	scanf("%f", &breadth);

	area = length * breadth;

	printf(
		"Area of the rectangle of length %.2f and breadth %.2f is %.2f.",
		length, breadth, area
	);

	return 0;
}

