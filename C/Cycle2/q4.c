#include<stdio.h>
void main(){
    int small,i,n,j;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array\n");
    for ( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Array = [ ");
    for ( i = 0; i < n; i++){
        printf("%d  ", a[i]);
    }
    printf("]\n");
    //Sorting start
    for ( i = 0; i < n; i++){
        small = i;
        for (j = i+1; j < n; j++){
            if(a[small] > a[j]){
                small = j;
            }
        }
        if(small != i){
            int t = a[small];
            a[small] = a[i];
            a[i] = t;
        }
         
    }
    printf("Sorted Array = [ ");
    for ( i = 0; i < n; i++){
        printf("%d  ", a[i]);
    }
    printf("]\n");
    
    
}
