#include<stdio.h>

int main() {
  int n1 = 0, n2 = 1;
  int i, n;

  printf("Enter the number: ");
  scanf("%d", &n);

  printf("%d, %d, ", n1, n2);

  for (i = 3; i <= n; i++) {
    int n3 = n1 + n2;
    
    printf("%d, ", n3);

    n1 = n2;
    n2 = n3;
  }
  printf("\n");

  return 0;
}
