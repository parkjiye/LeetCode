typedef struct stack_t {
    int items[100];
    size_t top;
} stack_t;

void s_init(stack_t* s) {
    s->top=0;
}

void s_push(stack_t* s, int item) {
    printf("%d %c\n", item, item);
    s->items[s->top++]=item;
}

char s_pop(stack_t* s, int* res) {
    *res = s->items[--s->top];
    return 0;
}

int s_is_empty(stack_t* s) {
    return s->top==0;
}

int scoreOfParentheses(char * s){
    stack_t stack;
    s_init(&stack);

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='(') s_push(&stack, -1);
        else
        {
            int count=0;
            int res;
            s_pop(&stack, &res);

            if(res==-1) {
                s_push(&stack, 1);
                continue;
            }

            while(res!=-1)
            {
                count=count+res*2;
                s_pop(&stack, &res);
            }

            //printf("%d\n", count);

            s_push(&stack, count);

        }
    }

    int ans=0;

    while(!s_is_empty(&stack))
    {
        int answer;
        s_pop(&stack, &answer);
        ans+=answer;
        printf("%d ", answer);
    }

    return ans;
}