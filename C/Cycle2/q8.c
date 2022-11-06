#include<stdio.h>

void main(){
    int r, c, i, j, sum=0;
    printf("Enter size row & column: ");
    scanf("%d %d", &r, &c);
    if(r == c){
        int a[r][c];
        printf("Enter Matrix: \n");
        for (i = 0; i < r; i++){
            for ( j = 0; j < c; j++){
                scanf("%d", &a[i][j]);
                
            }
            
        }
        printf("Your Matrix is \n");
        for (i = 0; i < r; i++){
            for ( j = 0; j < c; j++){
                printf("%d\t", a[i][j]);
                if(i==j){
                    sum += a[i][j];
                }
            }
            printf("\n");
            
        }
        printf("Sum of diagnol elements = %d\n", sum);
    }
    else{
        printf("Enter a square matrix\n");
    }
}
