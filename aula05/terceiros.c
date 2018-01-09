/* 
Compilar com o seguinte comando:
gcc -std=c99 -Wall -Wpedantic -Wextra -g -pedantic $(pkg-config --cflags glib-2.0) terceiros.c -o terceiros $(pkg-config --libs glib-2.0)
*/

#include <glib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    g_random_set_seed((unsigned int) time(NULL));
    for (int i = 0; i < 5; i++) {
        printf("%u\n", g_random_int());
    }
    return 0;
}
