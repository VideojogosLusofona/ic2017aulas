#include "stack.h"
#include <stdlib.h>

void stack_push(STACK **st, void *item) {
    STACK *newst = malloc(sizeof(STACK));
    newst->next = *st;
    newst->item = item;
    *st = newst;
}

void *stack_pop(STACK **st) {
    STACK *newst = (*st)->next;
    void *item = (*st)->item;
    free(*st);
    *st = newst;
    return item;
}

int stack_size(STACK *st) {
    int size = 0;
    while (st != NULL) {
        st = st->next;
        size++;
    }
    return size;
}
