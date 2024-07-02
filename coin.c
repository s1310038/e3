#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void coin() {
    int heads = 0;
    int tails = 0;
    printf("Who are you?\n");
    char name[100];
    scanf("%99s", name);
    printf("Hello, %s!\n", name);

    for (int cnt = 1; cnt <= 3; cnt++) {
        int result = rand() % 2; // 0 or 1
        if (result == 0) {
            printf("Round %d: Heads\n", cnt);
            heads++;
        } else {
            printf("Round %d: Tails\n", cnt);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);
     if (heads > tails) {
        printf("You won!\n");
    } else {
        printf("You lost\n");
    }
}

int main() {
    srand(time(NULL));
    coin();
    return 0;
}
