#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Apontadores para inteiro e double, inicialmente nao apontam para nada.
       Boa ideia inicializar apontadores a NULL. */
    int *pi = NULL;
    double *pd = NULL; 

    /* A funcao malloc aloca diretamente o numero de bytes solicitado.
       Se quiseremos espaco para 10 inteiros, temos de multiplicar 10 pelo
       numero de bytes que cada inteiro ocupa. */
    pi = malloc(10 * sizeof(int));

    /* Inicializar valores em pi */
    for (int i = 0; i < 10; i++) { pi[i] = -2 * i; }

    /* A funcao calloc aloca espaco para n items, cada um com tamanho indicado
       no segundo argumento. Esta funcao inicializa os conteudos da memoria a
       zero (ao contrario do malloc). Vamos alocar espaco para 15 doubles. */
    pd = calloc(15, sizeof(double));

    /* A funcao realloc realoca espaco previametne alocado com novo tamanho.
       Dados existentes na memoria nao se perdem caso novo espaco seja maior
       que espaco alocado anteriormente. */
    pi = realloc(pi, 15 * sizeof(int));

    /* Inicializar valores ainda nao inicializados em pi */
    for (int i = 10; i < 15; i++) { pi[i] = 100 * i; }

    /* Mostrar conteudos na memoria alocada: pi e pd */
    for (int i = 0; i < 15; i++) { printf("%d %lf\n", pi[i], pd[i]); }

    /* MUITO IMPORTANTE: Libertar sempre memoria alocada */
    free(pi);
    free(pd);
    
    /* Fim. */
    return 0;
}


