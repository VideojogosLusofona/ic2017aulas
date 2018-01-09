#include <stdio.h>
#define DIMX 4
#define DIMY 3

void altera_array(int *mul);
void imprime_array(int mul[DIMX][DIMY]);

int main() {

    int multi[DIMX][DIMY] = {{3, -2, 1}, {0, 5, 2}, {-3, -6, 4}, {2, -1, 0}};

    printf("Antes:\n");
    imprime_array(multi);

    altera_array((int *) multi);

    printf("Depois:\n");
    imprime_array(multi);

    return 0;
}

void altera_array(int *mul) {
    for (int i = 0; i < DIMX * DIMY; i++) {
        (*(mul + i))++;
    }
}

void imprime_array(int mul[DIMX][DIMY]) {
    for (int i = 0; i < DIMX; i++) {
        for (int j = 0; j < DIMY; j++) {
            printf("%3d ", mul[i][j]);
        }
        printf("\n");
    }
}

