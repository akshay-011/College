#include<stdio.h>
#include<string.h>
void main(){

    char str[50];
    printf("Enter string: ");
    scanf("%s", str);
    printf("String = %s\n", str);
    int i = 0, j = strlen(str);
    while(i < j){
        j--;
        char t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++;
    }
    printf("Reversed string = %s\n", str);
    
}
