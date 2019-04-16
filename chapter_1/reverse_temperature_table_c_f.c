#include <stdio.h>

/* print Celisus-Fahrenheith table
   for celsius = 300, 280, ..., 20, 0
   floating point version whit for loop */
int main() {
    int celsius;

    printf("___________\n");
    for (celsius = 300; celsius >= 0; celsius = celsius - 20) {
        printf("%3.0d |%6.1f\n", celsius, (celsius * (9.0 / 5.0)) + 32.0);
    }
}
