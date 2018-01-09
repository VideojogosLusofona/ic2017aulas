#include <stdio.h>

int main() {

    int valor;

    /* Pedir inteiro, colocar em valor */
    printf("Insira inteiro: ");
    scanf("%d", &valor);

    /* Deixar apenas os 8 bits menos significativos. */
    valor &= 0xff;

    /* Imprimir valor de diferentes perspectivas */
    printf("Visto como char              : %c\n", valor);
    printf("Visto como decimal com sinal : %d\n", (char) valor);
    printf("Visto como decimal sem sinal : %u\n", valor);
    printf("Visto como hexadecimal       : %x\n", valor);
    printf("Visto como octal             : %o\n", valor);

    /* Tchau. */
    return 0;

}
