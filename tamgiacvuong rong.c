#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int i,j,h;
	scanf("%d", &h);
	//phan dau
	printf("*\n");
	//phan giua
	for (i=1; i<=h-2; i++){
		printf("*");
		for (j=2; j<= i; j++){
			printf(" ");
			}
		printf("*\n");
	}
	
	//phan sau
	for (i = 0; i < h; i++) {
      printf("*");}
	return 0;
}


