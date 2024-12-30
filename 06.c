#include <stdio.h>

int main() {
    int ch, in, guess;

    printf("Enter the number Player-1: ");
    scanf("%d", &ch);

    printf("Enter the number of you want: ");
    scanf("%d", &in);

    for (int i = in; i > 0; i--) {
        printf("Enter your guess (Player-2): ");
        scanf("%d", &guess);

        if (guess == ch) {
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            printf("Wrong, %d Choice(s) Left!\n", i - 1);
        }
    }

    if (in == 0) {
        printf("Player-1 wins!\n");
    }

    return 0;
}