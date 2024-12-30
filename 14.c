#include <stdio.h>


long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    long long nCr;

    printf("Enter values for n and r: ");
    scanf("%d %d", &n, &r);

    if (n >= r) {
        // Calculate nCr
        nCr = factorial(n) / (factorial(r) * factorial(n - r));
        printf("%d C %d = %lld\n", n, r, nCr);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
