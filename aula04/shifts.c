#include <stdio.h>
int main() {

    /* Variaveis. */
    unsigned int value;

    /* Pedir valor. */
    printf("Insere valor a shiftar: ");
    scanf("%u", &value);

    /* Mostrar valor dos shifts. */
    printf("Shift left de %d e' %d\n", value, value << 1);
    printf("Shift right de %d e' %d\n", value, value >> 1);

    /* Tchau. */
    return 0; 
}
