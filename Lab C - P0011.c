#include<stdio.h>
int menu(){
	int choice;
		printf("1-  Convert binary number to decimal number\n");
		printf("2-  Convert octal number to decimal number\n");
		printf("3-  Convert hexadecimal number to decimal number\n");
		printf("4-  Quit the program\n");
		printf("Choose option 1 . . 4: \n");
		scanf("%d", &choice);
	
	return choice;
}
int main(){
	char numStr[20];
	int result;
	int choice;
	int decimal[1000];
	do{
		choice = menu();
		switch (choice){
			case 1:
			printf("Enter the binary number string");
			gets(numStr);
			result = decimal(numStr, 2);
			printf("Decimal value:%d\n", result);
			break;
			case 2:
			printf("Enter the octal number string");
			gets(numStr);	
		}
	} while (choice>0);
	return 0;
}
