#include<stdio.h>

void main(){
    int n, i, find, flag=0, indexFind;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Array: \n");
    for ( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter number to find: ");
    scanf("%d", &find);
    for ( i = 0; i < n; i++){
        if(find == a[i]){
            flag = 1;
            indexFind = i;
            break;
        }
    }
    printf("Your Array\n\n");
    for ( i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n\n");
    if(flag == 1){
        printf("Your Number found at %d index\n", indexFind);
    }
    else{
        printf("Number not found\n");
    }
}
