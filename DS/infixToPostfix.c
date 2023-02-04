#include<stdio.h>
#include<string.h>

char infix[30], postfix[30], symbols[30];
int poTop = -1, syTop = -1, len;

int push(char *, char, int);
char peek(char *, int);
char pop(char *, int *);

int check(char);

void main(){
    printf("Enter infix: ");
    scanf("%s", infix);
    len = strlen(infix);
    infix[len] = ')';
    syTop = push(symbols, '(', syTop);
    for(int i=0;i <= len;i++){
        char ch = infix[i];
        int chNow = check(ch);
        if(chNow == 2){
            syTop = push(symbols, ch, syTop);
        }
        else if(chNow == 0){
            poTop = push(postfix, ch, poTop);
        }
        else if(chNow == 1){
            char c = pop(symbols, &syTop);
            while(c != '('){
                poTop = push(postfix, c, poTop);
                c = pop(symbols, &syTop);
                
            }
        }
        else{
            char t = peek(symbols, syTop);
            if(check(t) >= chNow){
                printf("checkT = %d\n", check(t));
                while(check(t) >= chNow){
                    t = pop(symbols, &syTop);
                    poTop = push(postfix, t, poTop);
                    t = peek(symbols, syTop);
                    if(t=='('){
                        break;
                    }
                }
                syTop = push(symbols, ch, syTop);
            }
            else{
                syTop = push(symbols, ch, syTop);
            }
        }

    } 
    printf("The postfix  = \n%s\n", postfix);   
}

int push(char *str, char c, int top){

    if(top > len){
        printf("Stack is full\n");
        return -1;
    }
    top++;
    str[top] = c;
    return top;
}

int check(char c){
    if(c == '^')
        return 5;
    else if(c == '*' || c == '/')
        return 4;
    else if(c == '+' || c == '-')
        return 3;
    else if(c == '(')
        return 2;
    else if(c == ')')
        return 1;
    else
        return 0;
}

char pop(char *str, int * top){
    char t = str[*top];
    *top = *top - 1;
    return t;
}

char peek(char *str, int top){
    return str[top];
}