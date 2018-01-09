#include <stdio.h>
#include <string.h>

struct player {
    int id;
    char name[100];
    char country[100];
    long minutes_played;
    double highscore;
};

void mostra_struct(struct player plyr);
void tenta_mudar(struct player plyr);
void muda_mesmo(struct player *pplyr);

int main() {

    /* Declara e inicializa variavel do tipo struct player */
    struct player plyr1 = {12, "Pedro Alves", "Portugal", 1234, 234454.34};

    /* Mostra conteudos da variavel plyr1 */
    printf("Original:\n");
    mostra_struct(plyr1);

    /* Passa plyr1 por valor, tenta muda-la dentro da funcao */
    tenta_mudar(plyr1);

    /* Mostra conteudos da variavel plyr1 apos tentativa de mudanca */
    printf("Apos passagem por valor:\n");
    mostra_struct(plyr1);

    /* Passa plyr1 por referencia e altera campos dentro da funcao */
    muda_mesmo(&plyr1);

    /* Mostra conteudos da variavel plyr1 apos alteracao */
    printf("Apos passagem por referencia:\n");
    mostra_struct(plyr1);

    return 0;
}

/* Mostra conteudos da variavel plyr */
void mostra_struct(struct player plyr) {
    printf("\tID: %d\n", plyr.id);
    printf("\tName: %s\n", plyr.name);
    printf("\tCountry: %s\n", plyr.country);
    printf("\tMin.Played: %ld\n", plyr.minutes_played);
    printf("\tHighScore: %f\n", plyr.highscore);
}

/* Funcao que recebe variavel por valor e tenta muda-la */
void tenta_mudar(struct player plyr) {

    /* Altera campos da struct */
    plyr.id = 123;
    strcpy(plyr.name, "Jose Paulo");
    strcpy(plyr.country, "Brasil");
    plyr.minutes_played = 7773;
    plyr.highscore = 983.23;

    /* Mostra alteracoes dentro da funcao */
    printf("Dentro da funcao:\n");
    mostra_struct(plyr);

}

/* Funcao que recebe variavel por referencia e consegue altera-la */
void muda_mesmo(struct player *pplyr) {

    /* Altera campos da struct via referencia */
    (*pplyr).id = 123;
    strcpy((*pplyr).name, "Alexandra Braz");
    strcpy((*pplyr).country, "Angola");
    (*pplyr).minutes_played = 12334;
    (*pplyr).highscore = 83663.67;
}
