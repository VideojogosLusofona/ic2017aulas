#ifndef STACK_H
#define STACK_H

typedef struct stack STACK;

struct stack {
    void *item;
    STACK *next;
};

void stack_push(STACK **st, void *item);

void *stack_pop(STACK **st);

int stack_size(STACK *st);

#endif
