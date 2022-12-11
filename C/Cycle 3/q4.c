#include<stdio.h>
#include<stdlib.h>

void main(){
    int r, c, i, j, *arr;
    printf("Enter row & column: ");
    scanf("%d %d", &r, &c);
    arr = malloc(r * c * sizeof(int));
    if(arr == NULL){
        printf("Enter Right numbers\n");
        exit(0);
    }
    printf("Enter array\n");
    for(i = 0;i < r; i++){
        for(j = 0;j < c; j++){
            scanf("%d", (arr + (i*c) + j));
        }
    }
    int large = *(arr + 0*c + 0);
    
    printf("Array is\n");
    for(i = 0;i < r; i++){
        for(j = 0;j < c; j++){
            printf("%d\t", *(arr + (i*c)+j));
            if(*(arr+(i*c) + j) > large){
                large = *(arr + (i*c) + j);
                }
        }
        printf("\n");
    }
    printf("Largest number is %d\n", large);
    free(arr);

}
