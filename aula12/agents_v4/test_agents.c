#include "world.h"
#include "world_canvas.h"
#include "agent.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    /* Dimensoes da grelha */
    unsigned int xdim = 0, ydim = 0;
    /* Numero de agentes a colocar na grelha */
    unsigned int nagents = 0;

    /* Boa pratica inicializar zonas de memoria que vao ser alocadas a NULL */
    WORLD *wrld = NULL;
    CANVAS wrld_cnvs = NULL;

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

    /* Criar mundo de agentes com tamanho indicado pelo utilizador. */
    wrld = world_new(xdim, ydim);

    /* Criar canvas onde desenhar o mundo de agentes. */
    wrld_cnvs = world_canvas_new(wrld);

    /* Meter agentes aleatoriamente na grelha. */
    for (unsigned int i = 0; i < nagents; ++i) {

        int x, y;

        x = rand() % xdim;
        y = rand() % ydim;

        /* Neste caso evitamos "gravar" por cima, senão perdemos a referência a
         * agentes criados e depois não podemos libertar a respetiva memória. */
        if (world_get(wrld, x, y) == NULL) {
			AGENT_TYPE at = (rand() % 4) + 1;
			AGENT *a = agent_new(at, i, rand());
            world_put(wrld, x, y, (ITEM *) a);
        }
    }

    /* Atualizar canvas onde esta' a ser mostrado o mundo de agentes. */
    world_canvas_update(wrld_cnvs, wrld);

    /* Antes de sair, pedir ao utilizador para pressionar ENTER. */
    printf("Pressione ENTER para terminar...");
    getchar();

    /* IMPORTANTE: Libertar objetos criados pela ordem inversa da qual
       foram criados! */
    world_canvas_destroy(wrld_cnvs);
    world_destroy_full(wrld, (void (*)(ITEM *)) agent_destroy);

    /* Tchau. */
    return 0;
}


