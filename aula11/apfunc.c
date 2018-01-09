#include <stdio.h>

/* Prototipo de funcao */
int myfunc(float x);

int main() {

    const float x = 3.24; /* Float para teste de myfunc    */
    int i, j, k;          /* Inteiros                      */
    int (*apfun)(float);  /* Apont. para funcao            */
    apfun = myfunc;       /* apfunc agora aponta p/ myfunc */
    //myfunc = apfun;     /* ERRO! myfunc e' constante!    */

    /* Invocar myfunc indiretamente, via apontador */
    i = apfun(x);
    printf("Chamada indireta 1 = %d\n", i);

    /* Esta sintaxe tambem e' valida */
    j = (*apfun)(x);
    printf("Chamada indireta 2 = %d\n", j);

    /* Invocar myfunc diretamente */
    k = myfunc(x);
    printf("Chamada direta     = %d\n", k);

    return 0;
}

/* Corpo da funcao cujo prototipo esta' la' em cima */
int myfunc(float x) {
    return (int) ((x * x) / 2);
}


