#include <stdio.h>

#define LOWER 0     /* lower limit of temperature table */
#define UPPER 300   /* upper limit of temperature table */
#define STEP  20    /* step size */

/* print Celisus-Fahrenheith table
   for celsius = 0, 20, ..., 300
   floating point version */
int main() {
    int celsius;

    printf("___________\n");
    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP) {
        printf("%3.0d |%6.1f\n", celsius, (celsius * (9.0 / 5.0)) + 32.0);
    }
}
