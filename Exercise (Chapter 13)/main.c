// stack.h
#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack);
void push(Stack *stack, int value);
int pop(Stack *stack);
int top(const Stack *stack);

void dup(Stack *stack);
int count(const Stack *stack);
void add(Stack *stack);

#endif



#include "stack.h"

void initialize(Stack *stack) {
    stack->top = -1;
}

void push(Stack *stack, int value) {
    if (stack->top < MAX_SIZE - 1) {
        stack->data[++stack->top] = value;
    } else {
        printf("Error: Stack overflow\n");
    }
}

int pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top--];
    } else {
        printf("Error: Stack underflow\n");
        return -1;
    }
}

int top(const Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top];
    } else {
        printf("Error: Stack is empty\n");
        return -1;
    }
}


void dup(Stack *stack) {
    int topValue = top(stack);
    push(stack, topValue);
}

int count(const Stack *stack) {
    return stack->top + 1;
}

void add(Stack *stack) {
    int operand1 = pop(stack);
    int operand2 = pop(stack);
    int result = operand1 + operand2;
    push(stack, result);
}
