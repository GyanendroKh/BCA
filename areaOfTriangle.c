#include<stdio.h>

int main() {
	float base, height, area;

	printf("Enter the length of the base: ");
	scanf("%f", &base);


	printf("Enter the height: ");
	scanf("%f", &height);


	area = (base * height) / 2;

	printf("Area of a traingle of base %.2f and height %.2f is %.2f.", base, height, area);

	return 0;
}

