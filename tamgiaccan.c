#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int i,j,h;
	scanf("%d", &h);
	//phan dau
	for (i=0; i<=h-2; i++){
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
//phan duoi
	for (i = h-4; i >= 0; i--){
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

//	for (i = 0; i < h-2; i++){
//		for (j = 0; j < h+i-7; j++){
//			printf(" ");
//			}
//		printf("*");
//		for (j = 0; j <= 2*(h-i)-6; j++){
//			printf(" ");
//			}
//		printf("*");
//
//	printf("\n");
//	}

	
	//phan sau
	for (i=0; i<h-1; i++){
		printf(" ");
		} printf("*");
	return 0;
}
