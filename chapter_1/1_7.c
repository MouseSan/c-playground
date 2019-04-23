#include <stdio.h>

/* copy input to output
   also wtiting out EOF */
int main() {
    printf("--------\n");

    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    printf("---------\n");
    printf("%d\n", c);
}
