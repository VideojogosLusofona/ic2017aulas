#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { NO_ONE = 0, POLICE, THIEF, KILLER, VICTIM } AGENT;

int main(int argc, char *argv[]) {

    /* Dimensoes da grelha */
    unsigned int xdim = 0, ydim = 0;
    /* Numero de agentes a colocar na grelha */
    unsigned int nagents = 0;

    /* Boa pratica inicializar zonas de memoria que vao ser alocadas a NULL */
    AGENT *grid = NULL;

    /* Verificar se numero de argumentos foi o correto */
    if (argc != 4) {
        fprintf(stderr, "Modo de uso:\n");
        fprintf(stderr, "\t%s XDIM YDIM NPERSONS\n", argv[0]);
        exit(-1);
    }

    /* Inicializar gerador de numeros aleatorios. */
    srand(time(NULL));

    /* Converter argumentos (strings) em inteiros com funcao atoi. */
    xdim = atoi(argv[1]);
    ydim = atoi(argv[2]);
    nagents = atoi(argv[3]);

    /* Criar grelha 2D de AGENTs com tamanho indicado pelo utilizador. */
    /* Funcao calloc inicializa conteudos a zero (equivalente a NO_ONE). */
    grid = calloc(xdim * ydim, sizeof(AGENT));

    /* Em teoria e' boa ideia verificar se alocacao foi realizada com sucesso,
       mas posteriormente vamos omitir por uma questao de simplicidade. */
    if (grid == NULL) {
        fprintf(stderr, "Alocacao falhou!\n");
        exit(-1);
    }

    /* Meter agentes aleatoriamente na grelha (pode "gravar" por cima). */
    for (unsigned int i = 0; i < nagents; ++i) {

        int x, y;
        AGENT p;

        x = rand() % xdim;
        y = rand() % ydim;
        p = (rand() % 4) + 1;

        grid[y * xdim + x] = p;
    }

    /* Mostrar grelha de agentes. */
    for (unsigned int y = 0; y < ydim; ++y) {
        for (unsigned int x = 0; x < xdim; ++x) {

            AGENT p = grid[y * xdim + x];

            switch (p) {
                case NO_ONE:
                    printf(".");
                    break;
                case POLICE:
                    printf("P");
                    break;
                case THIEF:
                    printf("T");
                    break;
                case KILLER:
                    printf("K");
                    break;
                case VICTIM:
                    printf("V");
                    break;
                default:
                    /* So vai aqui em caso de erro */
                    printf("x");
            }
        }
        printf("\n");
    }
    printf("\n");

    /* Antes de sair, pedir ao utilizador para pressionar ENTER. */
    printf("Pressione ENTER para terminar...");
    getchar();

    /* IMPORTANTE: Libertar memoria alocada */
    free(grid);

    /* Tchau. */
    return 0;
}


