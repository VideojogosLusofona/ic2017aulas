#include <stdio.h>
int main(int argc, char* argv[])
{
    int i, espaco, linhas, k = 0;

    printf("Insere numero de linhas: ");
    scanf("%d", &linhas);

    for (i = 1; i <= linhas; ++i, k = 0)
    {
        for (espaco = 1; espaco <= linhas - i; ++espaco)
        {
            printf("  ");
        }

        while(k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }

    return 0;
}
