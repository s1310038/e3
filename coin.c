#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void coin() {
    int heads = 0;
    int tails = 0;

    for (int cnt = 1; cnt <= 3; cnt++) {
        int result = rand() % 2; 
        if (result == 0) {
            printf("Round %d: Heads\n", cnt);
            heads++;
        } else {
            printf("Round %d: Tails\n", cnt);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);
}

int main() {
    srand(time(NULL));
    coin();
    return 0;
}
