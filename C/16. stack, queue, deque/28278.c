#include <stdio.h>

#define MAX_STACK_SIZE 1000001
typedef int element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(StackType *s) {
    s->top = -1;
}

int is_empty(StackType *s) {
    return (s->top == -1);
}

int is_full(StackType *s) {
    return (s->top == MAX_STACK_SIZE - 1);
}

void push(StackType *s, element item) {
    if(is_full(s)) return;
    s->data[++(s->top)] = item;
}

element pop(StackType *s) {
    if(is_empty(s)) return -1;
    return s->data[(s->top)--];
}

element peek(StackType *s) {
    if(is_empty(s)) return -1;
    return s->data[s->top];
} 

int main(void) {
    int N, x, select;
    StackType stack;
    init_stack(&stack);

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &select);
        switch(select) {
            case 1 :
                scanf("%d", &x);
                push(&stack, x);
                break;
            case 2 :
                printf("%d\n", pop(&stack));
                break;
            case 3 :
                printf("%d\n", stack.top + 1);
                break;
            case 4 :
                printf("%d\n", is_empty(&stack));
                break;
            case 5 :
                printf("%d\n", peek(&stack));
                break;
        }
    }
}