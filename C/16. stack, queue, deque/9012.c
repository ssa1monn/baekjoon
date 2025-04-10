#include <stdio.h>

#define MAX_STACK_SIZE 51

typedef char element;
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

void push(StackType *s, element item) {
    s->data[++(s->top)] = item;
}

element pop(StackType *s) {
    if(is_empty(s)) return -1;
    return s->data[(s->top)--];
}

void pushString(StackType *s, element string[]) {
    int i = 0;
    while(string[i] != '\0') push(s, string[i++]);
}

int main(void) {
    int T;
    char string[51];
    StackType stack;
    init_stack(&stack);

    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        init_stack(&stack);
        scanf("%s", string);
        int j = 0, isVPS = 1;

        while(string[j] != '\0') {
            switch(string[j]) {
                case '(' :
                    push(&stack, string[j]);
                    break;
                case ')' :
                    if(!(pop(&stack) == '(')) isVPS = 0;
                    break;
            }
            j++;
        }

        if(!is_empty(&stack)) isVPS = 0;

        if(isVPS) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}