#include <stdio.h>

int main() {
    int num, or, rn = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);

    or = num;

    while (num != 0) {
        rem = num % 10;
        rn = rn * 10 + rem;
        num /= 10;                      
    }

    if (or == rn) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
