#include<stdio.h>

int binary[10];
int t = -1;

void convert();

void main(){
    int d;
    printf("Enter a decimal number: ");
    scanf("%d", &d);
    convert(d);
}
void convert(int d){
    while(d>0){
        t++;
        binary[t] = d%2;
        d = d/2;
    }
    printf("Binary is = ");
    while(t>-1){
        printf("%d ", binary[t]);
        t--;
    }
    printf("\n");
}