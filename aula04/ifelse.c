#include <stdio.h>
int main()
{
    int valor;
    printf("Insere um inteiro: ");
    scanf("%d", &valor);

    /* Condicao verdadeira se o resto for zero */
    if(valor % 2 == 0) {
        printf("%d inteiro par.\n", valor);
    } else {
        printf("%d inteiro impar.\n", valor);
    }
    return 0;
}
