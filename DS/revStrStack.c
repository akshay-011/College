/* 
    Reverse a string using Stack
*/
#include<stdio.h>
#include<string.h>

void revString();

char revStack[30];
int t = -1;
void main(){
    char str[30];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The string is\n%s\n", str);
    revString(str, strlen(str));
}

void revString(char str[], int l){
    while(t < l){
        t++;
        revStack[t] = str[t];        
    }
    printf("The reversed string is \n");
    while(t>=0){
        printf("%c", revStack[t]);
        t--;
    }
    printf("\n");
}