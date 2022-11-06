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

    int find, flag=0, findR, findC;
    printf("Enter search element: ");
    scanf("%d", &find);
    for (i = 0; i < r; i++){

        for ( j = 0; j < c; j++){

            if(a[i][j] == find){
                flag = 1;
                findR = i;
                findC = j;
                break;
            }
        }
        
    }
    if(flag == 1){
        printf("Number found at row = %d, column = %d \n", findR, findC);
    }
    else{
        printf("Number not found\n");
    }

}
