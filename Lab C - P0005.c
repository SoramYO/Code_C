#include <stdio.h>
#include <stdlib.h>
#define ESC 27
int main(int argc, char *argv[]) {
	int i,n;
	char c;
	do{
		printf("Mutiplication\n");
		printf("Please enter a number <1 - 9>: ");	
		scanf("%d", &n);;
		if (n > 0 && n < 10){
  			printf ("Multiplication table for %d number:\n", n);
		for (i = 1; i<=10; i++){
 			printf("%d x %d = %d\n", n, i, n*i);
		}	
   		printf ("Press any key to continue, ESC to quit\n");
   		c = getch();
   		}
	} 
	while (c!= ESC);	
	return 0;	
}
