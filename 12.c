#include <stdio.h>

int main() {
  int n, first = 1, second = 1, next, i;
printf("Enter number:");
  scanf("%d", &n);

  printf("Fibonacci Series:\n");

  for (i = 0; i < n; ++i) {
    printf("%d, ", first);
    next = first + second;
    first = second;
    second = next;
  }

  return 0;
}