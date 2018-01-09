# include <stdio.h>

int main() {

    char operador;
    int x, y;

    printf("Insere operador (+, -, *, /, %%): ");
    scanf("%c", &operador);

    printf("Insere dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &x, &y);

    switch(operador) {

        case '+':
            printf("%d + %d = %d\n", x, y, x + y);
            break;

        case '-':
            printf("%d - %d = %d\n", x, y, x - y);
            break;

        case '*':
            printf("%d * %d = %d\n", x, y, x * y);
            break;

        case '/':
            printf("%d / %d = %d\n", x, y, x / y);
            break;

        case '%':
            printf("%d %% %d = %d\n", x, y, x % y);
            break;

        /* Operador desconhecido! */
        default:
            printf("Erro! Operador incorrecto!");
    }

    return 0;
}
