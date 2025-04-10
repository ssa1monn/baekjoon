#include <stdio.h>

#define MAX_STACK_SIZE 100001

typedef int element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(StackType *s) {
    s->top = -1;
}

element pop(StackType *s) {
    return s->data[(s->top)--];
}

void push(StackType *s, element item) {
    s->data[++(s->top)] = item;
}

void printSum(StackType *s) {
    int sum = 0;
    for(int i = 0; i <= s->top; i++) sum += s->data[i];
    printf("%d", sum);
}

int main(void) {
    int K, x;
    StackType stack;
    init_stack(&stack);
    scanf("%d", &K);

    for(int i = 0; i < K; i++) {
        scanf("%d", &x);
        if(x == 0) pop(&stack);
        else push(&stack, x);
    }

    printSum(&stack);

    return 0;
}