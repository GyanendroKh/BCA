#include<stdio.h>

int main() {
	int option;

	float squareLength, squareArea;
	float rectLength, rectWidth, rectArea;
	float circleRadius, circleArea;
	float triangleHeight, triangleBase, triangleArea;

	printf("Choose an option:\n");
	printf("1. Area of a Square.\n");
	printf("2. Area of a Rectangle.\n");
	printf("3. Area of a Circle.\n");
	printf("4. Area of a Triangle.\n");

	printf("Option: ");
	scanf("%d", &option);
	printf("\n");

	switch(option) {
		case 1:
			printf("Area of Square...\n");

			printf("Length: ");
			scanf("%f", &squareLength);

			squareArea =  squareLength * squareLength;

			printf("Area: %.2f.\n", squareArea);

			break;
		case 2:
			printf("Area of Rectangle...\n");

			printf("Length: ");
			scanf("%f", &rectLength);

			printf("Width: ");
			scanf("%f", &rectWidth);

			rectArea = rectLength * rectWidth;

			printf("Area: %.2f.\n", rectArea);

			break;
		case 3:
			printf("Area of Circle...\n");

			printf("Radius: ");
			scanf("%f", &circleRadius);

			circleArea = 3.14 * (circleRadius * circleRadius);

			printf("Area: %.2f.\n", circleArea);

			break;
		case 4:
			printf("Area of Triangle...\n");

			printf("Height: ");
			scanf("%f", &triangleHeight);

			printf("Length of base: ");
			scanf("%f", &triangleBase);

			triangleArea = (triangleHeight * triangleBase) / 2;

			printf("Area: %.2f.\n", triangleArea);

			break;
		default:
			printf("Invalid option....\n");
			return 1;
	}

	return 0;
}

