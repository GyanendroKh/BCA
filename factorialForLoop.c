#include<stdio.h>

int main() {
  int i, n, fact = 1;

  printf("Enter the number: ");
  scanf("%d", &n);

  for(i = n; i > 0; i--) {
    fact = fact * i;
  }

  printf("Factorial of %d is %d.\n", n, fact);

  return 0;
}
