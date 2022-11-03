#include<stdio.h>
void main(){
    int small,i,n,j, find, indexFind;
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
    
    printf("Enter number to find: ");
    scanf("%d", &find);

    int flag=0, first = 0, last=n, m;
    while(first != last){
        m = (first + last)/2;
        if(a[m] == find){
            indexFind = m;
            flag = 1;
            break;
        }
        else if(find > a[m]){
            first = m;
        }
        else if(find < a[m]){
            last = m;
        }
    }
    if(flag == 1){
        printf("The number found at %d index\n", indexFind);
    }
    else{
        printf("Number not found\n");
    }
    

}
