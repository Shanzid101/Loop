
#include <stdio.h>

int main() {
  int n, i, sum = 0; 
  printf("Enter the number:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum += i * i * (i + 1); 
  }

  printf("Result:%d\n", sum); 
  return 0;
}
