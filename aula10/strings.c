#include <stdio.h>
#include <string.h>
#define MAXSTR 20

int main() {

    char string1[MAXSTR];
    char string2[MAXSTR];
    char string_juntas[2 * MAXSTR];
    char *pc;
    
    /* Obter string do utilizador. */
    printf("Insere uma string:");
    fgets(string1, MAXSTR, stdin);

    /* Substituir o \n por \0 */

    /* Primeiro encontrar o \n */
    pc = strchr(string1, '\n');
    /* Depois substituir pelo \0. Tambem podia ser: pc[0] = '\0'; */
    *pc = '\0';

    /* Mostrar a string lida. */
    printf("String lida:\n\t'%s'\n", string1);

    /* Copiar string obtida para outro array. Array de destino tem de ter
       espaco suficiente para string a copiar! */
    strncpy(string2, string1, MAXSTR);
    printf("String copiada:\n\t'%s'\n", string2);

    /* Testar se strings sao iguais. Notar uso da funcao strncmp e do operador
       ternario. */
    printf("São iguais?\n\t%s\n",
        strncmp(string1, string2, MAXSTR) == 0 ? "Sim :)" : "Nao :(");

    /* Mudar um caracter na string copiada. */
    string2[0] = 'X';
    printf("String copiada alterada:\n\t'%s'\n", string2);

    /* Verificar se continuam iguais. */
    printf("São iguais?\n\t%s\n",
        strncmp(string1, string2, MAXSTR) == 0 ? "Sim :)" : "Nao :(");

    /* Juntar as duas strings. */

    /* Primeiro copiar string1 para array com espaco suficiente para as duas. */
    strncpy(string_juntas, string1, MAXSTR);
    /* Depois juntar a string2. */
    strncat(string_juntas, string2, MAXSTR);
    /* E mostrar o resultado. */
    printf("Strings juntas:\n\t'%s'\n", string_juntas);

    return 0;
}
