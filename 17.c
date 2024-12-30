#include <stdio.h>

int main() {
    int num, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is Not prime\n", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("%d is Prime\n", num);
    } else {
        printf("%d is Not prime\n", num);
    }

    return 0;
}
