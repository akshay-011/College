    #include<stdio.h>
    void main(){
        int n,i, sum=0;
        printf("Enter a limit: ");
        scanf("%d",&n);
        int array[n];
        printf("Enter Array: \n");
        for ( i = 0; i < n; i++){
            scanf("%d", &array[i]);
            sum += array[i];
        }
        printf("Sum of elements = %d\n", sum);
    }
