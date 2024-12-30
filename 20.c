#include <stdio.h>

int main() {
    int n, f = 0, t;
    printf("Enter n-th number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        t = 0;
        for (int j = 1; j <= i; j++) t = t * 10 + j; 
        f += t;
    }
    printf("%d\n", f);
    return 0;
}