#include <stdlib.h>
#include <stdio.h>

/* Tamanho dos arrays. */
#define ARRAYLEN 4

/* Estrutura que define um jogador. */
typedef struct {
    /* Tipo de jogador. */
    enum { Archer = 0xA, Barbarian = 0xB, Druid = 0xD } type;
    /* Energia do jogador. */
    unsigned int energy;
} PLAYER;

/* Prototipos das funcoes de comparacao de tipos */
int comp_chars(const void *, const void *);
int comp_doubles(const void *, const void *);
int comp_players(const void *, const void *);

/* Funcao main */
int main() {

    /* Declarar e definir arrays de tres tipos diferentes */
    char   a_few_chars[ARRAYLEN]   = {'a', 'z', 'd', 'A'};
    double a_few_doubles[ARRAYLEN] = {2.3, 1.0, 9.4, 6.8};
    PLAYER a_few_players[ARRAYLEN] = {
        { Archer,    236},
        { Druid,     101},
        { Barbarian, 592},
        { Archer,    307}
    };

    /* Ordenar arrays de tipos diferentes usando a funcao qsort
       mas passando uma funcao de comparacao apropriada para cada
       tipo */
    qsort(a_few_chars,   ARRAYLEN, sizeof(char),   comp_chars  );
    qsort(a_few_doubles, ARRAYLEN, sizeof(double), comp_doubles);
    qsort(a_few_players, ARRAYLEN, sizeof(PLAYER), comp_players);

    /* Mostrar como foram os arrays ordenados. */
    printf("Chars  :");
    for (int i = 0; i < ARRAYLEN; ++i) {
        printf(" %6c", a_few_chars[i]);
    }

    printf("\nDoubles:");
    for (int i = 0; i < ARRAYLEN; ++i) {
        printf(" %6.2lf", a_few_doubles[i]);
    }

    printf("\nPlayers:");
    for (int i = 0; i < ARRAYLEN; ++i) {
        PLAYER plyr = a_few_players[i];
        printf(" %X(%u)", plyr.type, plyr.energy);
    }

    printf("\n");
    return 0;
}

/* Comparacao de chars */
int comp_chars(const void *c1, const void *c2) {
    return *((char*) c1) - *((char*) c2);
}

/* Comparacao de doubles */
int comp_doubles(const void *d1, const void *d2) {
    return *((double*) d1) - *((double*) d2);
}

/* Comparacao de players */
int comp_players(const void *p1, const void *p2) {

    /* Variavel onde se vai guardar resultado da comparacao */
    int comp;

    /* Variaveis player obtidas atraves dos apontadores genericos */
    PLAYER plyr1 = *((PLAYER *) p1);
    PLAYER plyr2 = *((PLAYER *) p2);

    /* Comparar players */
    if (plyr1.type == plyr2.type) {
        /* Se players forem do mesmo tipo, ordenar por maior energia */
        comp = plyr2.energy - plyr1.energy;
    } else {
        /* Senao ordenar alfabeticamente por tipo */
        comp = plyr1.type - plyr2.type;
    }
    return comp;
}
