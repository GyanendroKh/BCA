#include<stdio.h>

int main() {
  int n1 = 0, n2 = 1;
  int n, i = 3;

  printf("Enter the number: ");
  scanf("%d", &n);

  printf("%d, %d, ", n1, n2);

  do {
    int n3 = n1 + n2;

    printf("%d, ", n3);

    n1 = n2;
    n2 = n3;

    i++;
  } while(i <= n);
  printf("\n");

  return 0;
}
