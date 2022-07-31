#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 
 	int a,b,c;
	float d;  
  	printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    printf("Nhap c: ");
    scanf("%d", &c);
    d = b^2+4*a*c;
    if (d > 0){
	printf("Phuong trinh co 1");
	} else if (d>0){
		printf("Phuong trinh khong co nghiem");
	} else {
		printf("Phuong trinh co nghiem kep");
	}
    
    return 0;
}
