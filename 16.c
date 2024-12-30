#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2, gcd, lcm;

    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD and LCM
    gcd = findGCD(num1, num2);
    lcm = findLCM(num1, num2);

    
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
