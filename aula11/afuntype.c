#include <stdio.h>

/* Tipo de funcao que nao devolve nada e aceita um int */
typedef void (*changeint)(int *);

/* Prototipos de funcoes que obedecem ao tipo changeint */
void incrementa(int *);
void decrementa(int *);
void duplica(int *);

int main() {

    int a = 5, b = 5, c = 5;
    changeint uma_funcao;

    uma_funcao = incrementa;
    uma_funcao(&a);

    uma_funcao = decrementa;
    uma_funcao(&b);

    uma_funcao = duplica;
    uma_funcao(&c);

    printf("a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}

/* Corpos da funcaos cujo prototipo esta' la' em cima */
void incrementa(int *n) {
    (*n)++;
}

void decrementa(int *n) {
    (*n)--;
}

void duplica(int *n) {
    *n *= 2;
}


