#include <stdio.h>

int main(){
	int i,n;
	int arr[1000];
	printf("Please enter size of array:");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		printf("Element[%d] =", i);
		scanf("%d", &arr[i]);
	} 
	int min;
	float minout = arr[0];
	for (i = 0; i < n; i++){
		if (arr[i] < min){
			min = arr[i];
		}
	}
	printf("The smallest element:%d", min);
	int x = 0;
	for (i = 0; i <= n; i++) {
      if (arr[i] == min) {
      printf("  - Its position:%d", i + 1);
      }
	}
	return 0;
}
