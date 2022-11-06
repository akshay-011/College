#include<stdio.h>

void main(){
    int r, c, i, j;
    printf("Enter size row & column: ");
    scanf("%d %d", &r, &c);
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
        }
        printf("\n");
        
    }

}
