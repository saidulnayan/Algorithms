#include <stdio.h>
#include <stdlib.h>

int main() {

    double array[100];

    for (int i = 0; i < 100; i++) {
        array[i] = (double)(rand() % 100 + 1) / 2.0;

        printf("%.2lf\t", array[i]);

        if (i != 9 && i != 19 && i != 29 && i != 39 && i != 49 && i != 59 && i != 69 && i != 79 && i != 89 && i != 99)

        if ( i == 9 || i == 19 || i == 29 || i == 39 || i == 49 || i == 59 || i == 69 || i == 79 || i == 89 || i == 99) {
            printf("\n");
        }

    }
}
