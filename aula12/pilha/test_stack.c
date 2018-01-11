#include "stack.h"
#include <stdio.h>

int main() {

    STACK* st = NULL;
    stack_push(&st, (void *) "Uma string");
    stack_push(&st, (void *) "Outra string");
    stack_push(&st, (void *) "E' a terceira!");
    stack_push(&st, (void *) "E mais uma, a ultima.");

    printf("Tamanho da stack: %d\n", stack_size(st));

    while (st != NULL) {
        printf("%s\n", (char *) stack_pop(&st));
    }

    return 0;
}
