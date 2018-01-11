#include "world_canvas.h"
#include "agent.h"
#include <stdio.h>
#include <stdlib.h>
#include <g2.h>
#include <g2_X11.h> /* Em Windows deve-se incluir g2_win32.h */

enum g2_colors {
    WHITE = 0,
    BLACK = 1,
    BLUE = 3,
    GREEN = 7,
    RED = 19,
    YELLOW = 25
};

CANVAS world_canvas_new(WORLD *wrld) {

    int *device;
    device = malloc(sizeof(int));

    /* Abrir janela com g2. Em Windows a funcao chama-se g2_open_win32() */
    *device = g2_open_X11(wrld->xdim * 5, wrld->ydim * 5);

    /* Especificar tamanho e forma dos agentes */
    g2_set_QP(*device, 5, QPcirc);

    return (CANVAS) device;
}

void world_canvas_update(CANVAS cnvs, WORLD *wrld) {

    int device = *((int *) cnvs);
    g2_clear(device);

    for (unsigned int y = 0; y < wrld->ydim; ++y) {
        for (unsigned int x = 0; x < wrld->xdim; ++x) {

            AGENT *a = (AGENT *) world_get(wrld, x, y);

            if (a != NULL) {
                switch (a->type) {
                    case POLICE:
                        g2_pen(device, BLUE);
                        g2_plot_QP(device, x, y);
                        break;
                    case THIEF:
                        g2_pen(device, GREEN);
                        g2_plot_QP(device, x, y);
                        break;
                    case KILLER:
                        g2_pen(device, RED);
                        g2_plot_QP(device, x, y);
                        break;
                    case VICTIM:
                        g2_pen(device, YELLOW);
                        g2_plot_QP(device, x, y);
                        break;
                    default:
                        /* So vai aqui em caso de erro */
                        fprintf(stderr, "Agente desconhecido!");
                }
            }
        }
    }

}

void world_canvas_destroy(CANVAS cnvs) {

    g2_close(*((int *) cnvs));
    free(cnvs);

}

