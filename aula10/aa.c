#include <stdio.h>
#define FIM -999

void mostrar_conteudos(int *aa[]);
int *procura_endereco_de_valor(int *aa[], int valor);

int main() {

    /* Declarar 5 arrays com comprimentos diferentes */
    int a0[] = {2, 3, 4, FIM};
    int a1[] = {20, -50, 150, -200, 400, -540, FIM};
    int a2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, FIM};
    int a3[] = {FIM};
    int a4[] = {-2, -10, FIM};

    /* Declarar array de apontadores */
    int *aa[] = {a0, a1, a2, a3, a4, NULL};

    /* Apontador para inteiro */
    int *p;

    /* Invocar as varias funcoes */
    mostrar_conteudos(aa);
    p = procura_endereco_de_valor(aa, 8);

    /* Percorrer enderecos dos arrays ate chegar a NULL */
    for (int i = 0; aa[i] != NULL; i++) {
        /* Mostrar endereco de memoria de cada um dos arrays */
        printf("Endereco de a[%d] = %p\n", i, (void*) aa[i]);
    }

    /* Mostrar endereco de memoria onde se encontra o valor 8 */
    printf("Endereco de memoria de 8: %p\n", (void*) p);

    return 0;
}

void mostrar_conteudos(int *aa[]) {

    /* Percorrer enderecos dos arrays ate chegar a NULL */
    for (int i = 0; *(aa + i) != NULL; i++) {

        /* Percorrer valores do array actual ate chegar ao FIM */
        printf("%d => ", i);
        for (int j = 0; (*(aa + i))[j] != FIM; j++) {
            printf("%5d ", (*(aa + i))[j]);
        }
        printf("\n");
    }
}

int *procura_endereco_de_valor(int *aa[], int valor) {

    /* Percorrer enderecos dos arrays ate chegar a NULL */
    for (int i = 0; *(aa + i) != NULL; aa++) {

        /* Percorrer valores do array actual ate chegar ao FIM
           ou ate encontrar o valor */
        for (int j = 0; (*(aa + i))[j] != FIM; j++) {
            if ((*(aa + i))[j] == valor) {
                return *(aa + i) + j;
            }
        }
    }

    /* Se valor nao encontrado, retornar NULL */
    return NULL;
}
