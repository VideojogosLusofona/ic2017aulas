#include <stdio.h>

#define ARMY_SIZE 6

/* Declaracao de enum */
enum unit { tank = 10, airplane = 20, infantry = 30 };

/* Declaracao de enum como tipo. */
typedef enum { dagger, sword, axe, mace } MELEE_WEAPON;


int main() {

    /* Declaracao de enum e variavel em simultaneo. */
    enum day { SUN, MON, TUE, WED, THU, FRI, SAT } today, tomorrow;

    /* Declaracao de enum sem nome e variavel em simultaneo. */
    enum { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec }
        month1, month2 = Feb, month3;

    /* Array de enum unit's. */
    enum unit army[ARMY_SIZE] = 
        { tank, tank, airplane, infantry, infantry, infantry };

    /* Declarar variavel do tipo MELEE_WEAPON. */
    MELEE_WEAPON my_weapon = mace;

    /* Atribuir valores a variaveis nao inicializadas. */
    today = THU;
    tomorrow = FRI;
    month1 = Sep;
    month3 = May;

    /* Printf das diferentes variaveis como inteiros, ver o que da' */
    printf("today    = %d\n", today);
    printf("tomorrow = %d\n", tomorrow);
    printf("month1   = %d\n", month1);
    printf("month2   = %d\n", month2);
    printf("month3   = %d\n", month3);
    for (int i = 0; i < ARMY_SIZE; ++i) {
        printf("army #%d  = %d\n", i, army[i]);
    }
    printf("my_weapon= %d\n", my_weapon);

    return 0;

}
