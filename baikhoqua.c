#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int n;
	int i= 0;
	scanf("%d", &n);
			printf("%d\n", (n % 10 )*1);
			if ((n/10>9)){
				printf("%d", n/10);
				printf("%d\n", n/100);
				
			}
	return 0;
}
