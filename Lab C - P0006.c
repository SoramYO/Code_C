#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	 int i,n,j,k,l;
    int arr[100];
    printf("Please enter size of array:");
    scanf("%d", &n);
    for ( i = 0; i < n; i++){
		printf("Enter element[%d]: ", i);
		scanf("%d", &arr[i]);
    }
    int trd = 0;
	for (i = 0; i < n; i++){
		for ( j = i + 1; j < n; j++){
			if (arr[i] > arr[j]){
					trd = arr[i];
					arr[i] = arr[j];
					arr[j] = trd;
			}
		}
	}
	printf("The array sorted in ascending:\n");
	for (k = 0; k < n; k++){
		printf("%d     ", arr[k]);
	}
	printf("\n\n");
	  int trx = 0;
	for (i = 0; i < n; i++){
		for ( j = i + 1; j < n; j++){
			if (arr[i] < arr[j]){
					trx = arr[i];
					arr[i] = arr[j];
					arr[j] = trx;
			}
		}
	}
	printf("The array sorted in descending:\n");
	for (l = 0; l < n; l++){
		printf("%d     ", arr[l]);
	}
	
	
	return 0;
}
