#include <stdio.h>

#define ASIZE 4
 
int main() {

    /* Declaracao de arrays */
    char achar[ASIZE] = {'a', 'b', 'c', 'd'};
    int aint[ASIZE] = {10, 20, 30, 40};
    double adouble[ASIZE] = {0.1, 0.2, 0.3, 0.4};

    /* Mostrar conteudos e enderecos de memoria do array de chars */
    printf("Array de chars:\n");
    for (int i = 0; i < ASIZE; ++i) {
        printf("\tPosicao = %d : Valor = %c : Endereco : %p\n",
            i, achar[i], (void *) (achar + i));
    }

    /* Mostrar conteudos e enderecos de memoria do array de ints */
    printf("Array de ints:\n");
    for (int i = 0; i < ASIZE; ++i) {
        printf("\tPosicao = %d : Valor = %d : Endereco : %p\n",
            i, aint[i], (void *) (aint + i));
    }

    /* Mostrar conteudos e enderecos de memoria do array de doubles */
    printf("Array de doubles:\n");
    for (int i = 0; i < ASIZE; ++i) {
        printf("\tPosicao = %d : Valor = %f : Endereco : %p\n",
            i, adouble[i], (void *) (adouble + i));
    }

    return 0;
}
