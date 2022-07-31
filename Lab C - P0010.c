#include <stdio.h>

int main(){
	int i,n;
	int arr[1000],b[1000];
	printf("Please enter size of array:");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		printf("Element[%d] =", i);
		scanf("%d", &arr[i]);
	}

	printf("The original array:\n");
	for (i = 0; i < n; i++){
		printf("%d   ", arr[i]);
	}
	printf("\n");
	printf("The array after removing duplicate elements:\n");
	int d = 0;
	for (i = 0; i < n ; i++){
		int kt=0;
		int j = 0;
		for (j = 0; j<n; j++){
			if (arr[i]==arr[j] && i != j){
				kt = 1;
			}
		}
		if (kt==0){
			b[d]=arr[i];
			d++;
		}
	}
	for (i = 0; i < d; i++){
   	printf("%d   ", b[i]);
   }
	
//	int v,j,k,*N;
//    for (i=0;i<(*N)-1;i++){
//    j=i+1;
//    while (j<*N)
//      if (arr[i]==arr[j]){
//        for (k=j;k<(*N)-1;k++)
//			arr[k]=arr[k+1];
//        	*N=(*N)-1;
//      }
//      else j=j+1; 
//   }
//   for (i = 0; i < n; i++){
//   	printf("%d ", arr[i]);
//   }
//	for(i = 0; i < n; i++){
//		for (j = i + 1; j < n; j++){
//			if (arr[i] == arr[j]){
//				printf("%d   ", arr[j]);
//			}
//		}
//	}	
return 0;
}
