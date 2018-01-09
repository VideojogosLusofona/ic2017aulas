#include <stdio.h>
int main() {
    int sou_um_inteiro, vars_lidas;
    printf("Insere um inteiro: ");
    vars_lidas = scanf("%d", &sou_um_inteiro);  
    printf("Valor lido: %d\n", sou_um_inteiro);
    printf("Numero de variaves lidas: %d\n", vars_lidas);
    return sou_um_inteiro;
}
