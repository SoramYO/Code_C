#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int i,j,h;
	scanf("%d", &h);
	//phan dau
	for (i=0; i<h-1; i++){
		printf(" ");
		} printf("*\n");
	//phan giua
	for (i = 0; i < h-2; i++){
		for (j = 0; j < h-i-2; j++){
			printf(" ");
			}
		printf("*");
		for (j = 1; j <= i*2+1; j++){
			printf(" ");
			}
		printf("*");

	printf("\n");
	}

	//phan sau
	for (i = 0; i < h*2-1; i++) {
    printf("*");}
	return 0;
}
