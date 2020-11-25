#include<stdio.h>

int main() {
	float side, area;

	printf("Enter the length of the side: ");
	scanf("%f", &side);

	area = side * side;

	printf("Area of the square of length %.2f is %.2f.", side, area);

	return 0;
}

