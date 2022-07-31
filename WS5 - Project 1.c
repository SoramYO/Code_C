#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int dice(int a, int b) {
	int n;
		n=a+rand()%b;
	return n;
}
void main(){
	int i,n,s1,s2;
		printf("Ball Lottery \n================\n");
		printf("Total sought: ");
		scanf("%d",&n);
		i=1;
		if (n<=20 && n>=2){
			srand(time(NULL));
			do{
				s1=dice(1,10);
				s2=dice(10,1);
				printf("\nResult of throw %d: %d + %d",i,s1,s2);
				if ((s1+s2)==n) printf("\nYou got your total in %d throws!\n",i);
				i+=1;
			} while ((s1+s2)!=n);
		}
		else printf("Invalid Value");
getch();
}
