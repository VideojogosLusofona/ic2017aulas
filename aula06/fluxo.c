#include <stdio.h>

int main() {

    int valor;

    /* Pedir inteiro, colocar em valor */
    printf("Insira inteiro: ");
    scanf("%d", &valor);

    /* O valor e' maior, menor ou igual a zero? */
    if (valor > 0) {

        printf("Valor maior que zero, contagem decrescente\n");

        for (int i = valor; i > 0; i--) {
            printf("%d\n", i);
        }

    } else if (valor < 0) {

        printf("Valor menor que zero, contagem crescente\n");

        for (int i = valor; i < 0; i++) {
            printf("%d\n", i);
        }

    } else {

        printf("Valor igual a zero, sem contagem\n");

    }

    /* Tchau. */
    return 0;

}
