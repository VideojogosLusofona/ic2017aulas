#include <stdio.h>
int main() {

    int num, cont, soma = 0;

    printf("Insere um inteiro positivo: ");
    scanf("%d", &num);

    /* O ciclo repete-se enquanto cont for menor que num. */
    for(cont = 0; cont < num; ++cont) {
        soma += cont;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
