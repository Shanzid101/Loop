#include <stdio.h>

int main() {
    char in;
    int count = 1;

    printf("Start typing (type 'A' to stop):\n");

    while (1) {
        in = getchar();

        
        if (in == ' ' || in == '\n') {
            continue;
        }

        if (in == 'A') {
            break;
        }

        printf("Input %d: %c\n", count, in);
        count++;
    }

    return 0;
}
