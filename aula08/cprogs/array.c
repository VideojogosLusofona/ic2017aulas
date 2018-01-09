#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAX 10

int main() {

    /* Declaracao de variaveis */
    int um_array[TAMANHO_MAX], n, soma = 0;

    /* Pedir numero de valores para obter a media */
    printf("Numero de valores para obter a media (max=%d): ", TAMANHO_MAX);
    scanf("%d", &n);

    /* Numero de valores cabe no array? */
    if (n > TAMANHO_MAX) {
        /* Senao couber, mostrar mensagem de erro e sair com codigo diferente
           de zero */
        fprintf(stderr, "Tamanho acima do aceitavel!\n");
        exit(1);
    }

    /* Pedir valores a inserir no array. */
    for(int i = 0; i < n; ++i) {
        printf("Insere o %do numero: ", i + 1);
        scanf("%d", &um_array[i]);
        soma += um_array[i];
    }

    /* Mostrar a media dos valores no array. */
    printf("Media = %f\n", (float) soma / n);

    return 0;
}
