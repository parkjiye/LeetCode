typedef struct stack_t {
    char item[10001];
    size_t top;
} stack_t;

void s_init(stack_t* s) {
    s->top=0;
}

void s_push(stack_t* s, char item) {
    s->item[s->top++]=item;
}

char s_pop(stack_t* s, char* res) {
    *res = s->item[--s->top];
    return 0;
}

int s_is_empty(stack_t* s) {
    return s->top==0;
}

bool isValid(char * s){
    stack_t stack;
    s_init(&stack);

    int answer=0;
    
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') s_push(&stack, s[i]);
        else {
            if(s_is_empty(&stack)) return false;
            if(s[i]==')')
            {
                char res;
                s_pop(&stack, &res);
                if(res!='(') return false;
                continue;
            }
            if(s[i]==']')
            {
                char res;
                s_pop(&stack, &res);
                if(res!='[') return false;
                continue;
            }
            if(s[i]=='}')
            {
                char res;
                s_pop(&stack, &res);
                if(res!='{') return false;
                continue;
            }
            
        }
    }

    if(!s_is_empty(&stack)) return false;
    
    return true;

}