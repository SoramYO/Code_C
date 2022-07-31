#include <stdio.h>
#include <conio.h>

void ve1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
void ve2(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--)
            printf("*");
        printf("\n");
    }
}
void ve3(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--)
            printf(" ");
        for(int k=1;k<=2*i-1;k++)
            printf("*");

        printf("\n");
    }
}
void ve4(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--)
            printf(" ");
        for(int k=1;k<=2*i-1;k++)
            printf("*");

        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=n;j>i;j--)
            printf(" ");
        for(int k=1;k<=2*i-1;k++)
            printf("*");

        printf("\n");
    }
}
void ve5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
         printf("*");
        for(int j=i+1;j<=2*n-i;j++)
         printf(" ");
        for(int j=1;j<=i;j++)
         printf("*");
        printf("\n");
    }

}
int main(){
    int n = 6;
    ve1(n);
    getch();
    printf("----------\n");
    ve2(n);
    getch();
    printf("----------\n");
    ve3(n);
    getch();
    printf("----------\n");
    ve4(n);
    getch();
    printf("----------\n");
    ve5(n);
    getch();
    printf("----------\n");
    return 0;

}
