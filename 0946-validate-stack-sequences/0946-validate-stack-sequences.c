typedef struct stack_t {
    int items[1000];
    size_t top;
} stack_t;

void s_init(stack_t* s) {
    s->top=0;
}

void s_push(stack_t* s, int item) {
    s->items[s->top++]=item;
}

char s_pop(stack_t* s, int* res) {
    *res = s->items[--s->top];
    return 0;
}

int s_peek(stack_t *s, int* res) {
    if(s_is_empty(s)) {
        *res=NULL;
        return -1;
    }

    *res = s->items[s->top-1];
    return 0;
}

int s_is_empty(stack_t* s) {
    return s->top==0;
}

bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize){
    stack_t stack;
    s_init(&stack);

    int i=0;

    for(int pop=0;pop<poppedSize;pop++)
    {
        int top;
        int res = s_peek(&stack, &top);

        if(res==-1) top = -1;

        while(popped[pop]!=top)
        {
            if(i==pushedSize)
            {
                return false;
            }
            s_push(&stack, pushed[i]);
            i+=1;
            res = s_peek(&stack, &top);
            if(res==-1) top = -1;
        }
        
        s_pop(&stack, &top);
        
    }

    return true;
}