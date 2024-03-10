// main.c
#include <stdio.h>
#include "stack.h"

int main() {
    Stack stack;
    initialize(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("Stack count: %d\n", count(&stack));

    printf("Top element: %d\n", top(&stack));

    printf("Duplicating top element...\n");
    dup(&stack);
    printf("Stack count after duplication: %d\n", count(&stack));

    printf("Adding top two elements...\n");
    add(&stack);
    printf("Stack count after addition: %d\n", count(&stack));
    printf("Top element after addition: %d\n", top(&stack));

    return 0;
}


# Makefile

all: stack_test

stack_test: main.o stack.o
    gcc -o stack_test main.o stack.o

main.o: main.c stack.h
    gcc -c main.c

stack.o: stack.c stack.h
    gcc -c stack.c

clean:
    rm -f stack_test main.o stack.o

