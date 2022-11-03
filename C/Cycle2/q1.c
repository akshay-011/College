#include<stdio.h>
void main(){
    int n,i;
    printf("Enter a limit: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter Array: \n");
    for ( i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    printf("Your Array is \n");
    for ( i = 0; i < n; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}
