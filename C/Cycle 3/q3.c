#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("\nDevelop a C program to find the largest of all elements in a single dimensional array\n\n");
    int * arr, n, i;
    printf("Enter Array limit: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Array declaration Error\n");
        exit(0);
    }
    printf("Enter array\n");
    for ( i = 0; i < n; i++){
        scanf("%d", arr+i);
    }
    printf("Array is\n");
    int largest = *(arr + i);
    for ( i = 0; i < n; i++){
        printf("%d\t", *(arr+i));
        if(*(arr+i) > largest)
            largest = *(arr+i);
    }
    printf("\n\nLargest = %d\n", largest);

    free(arr);
    
    
}
