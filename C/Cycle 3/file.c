#include<stdio.h>
#include<stdlib.h>

void main(int argc, char * argv[]){
	if (argc > 1){
		FILE * file = fopen(argv[1], "r");
		if(file == NULL){
			file = fopen(argv[1], "w");
			printf("File created run again\n");
			fclose(file);
			exit(0);
		}
		int op;
		printf("_______MENU_______");
		printf("\nEnter 1 for printing data\n");
		printf("Enter 2 for entering data\n");
		printf("Enter option: ");
		scanf("%d", &op);
		if(op == 1){
			FILE * file = fopen(argv[1], "r");
			char line[500];
			printf("The data are\n\n");
			while(fgets(line, sizeof(line), file) != NULL){
			printf("%s", line);
			}
			fclose(file);
			exit(0);
		}
		else if(op == 2){
			FILE * file = fopen(argv[1], "a");
			char name[20], des[20];
			float empNo, bP, dA, hRa, pFund, lIc;
			printf("Enter employee number: ");
			scanf("%f", &empNo);
			printf("Enter employee name: ");
			scanf("%s", name);
			printf("Enter employee Designation: ");
			scanf("%s", des);
			printf("Enter basic pay: ");
			scanf("%f", &bP);
			dA = (bP / 100.0) * 10.0;
			hRa = (bP / 100.0) * 4.0;
			printf("Enter provident fund: ");
			scanf("%f", &pFund);
			printf("Enter LIC: ");
			scanf("%f", &lIc);
			//Writing into file
			fprintf(file, "Employee Number = %.2f\n", empNo);
			fprintf(file, "Employee Name   = %s\n", name);
			fprintf(file, "Designation     = %s\n", des);
			fprintf(file, "Basic Pay       = %.2f\n", bP);
			fprintf(file, "Employee DA     = %.2f\n", dA);
			fprintf(file, "Employee HRA    = %.2f\n", hRa);
			fprintf(file, "Provident Fund  = %.2f\n", pFund);
			fprintf(file, "Employee LIC    = %.2f\n", lIc);
			fclose(file);

			printf("Succesfully updated\n");
			exit(0);		
		}
		else{
			printf("Enter correct number\n");
			exit(0);
		}
	}
	printf("Enter file name to save data\n");
}
