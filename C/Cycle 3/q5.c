#include<stdio.h>
struct markList{
    char name[50];
    int rollNo;
    int sub;
    float m1, m2, m2, m3, m4, m5;
};

void main(){
    int n, i;
    printf("Enter number students: ");
    scanf("%d", &n);
    struct markList st[n];
    for(i = 0; i < n; i++){
        printf("\nEnter Name: ");
        scanf("%s", st[i].name);
        printf("Enter Roll no: ");
        scanf("%d", &st[i].rollNo);
        printf("Enter 5 marks: ");
        scanf("%f %f %f %f %f", &st[i].m1, &st[i].m2, &st[i].m3, &st[i].m4, &st[i].m5);
    }
    printf("Mark List\n");
    for(i = 0; i < n; i++){
        printf("\n\nName = %s\n", st[i].name);
        printf("Roll no = %d\n", st[i].rollNo);
        printf("Marks = %f, %f, %f, %f, %f\n", st[i].m1, st[i].m2, st[i].m3, st[i].m4, st[i].m5);
    }

}
