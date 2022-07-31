#include<stdio.h>
#include<string.h>

int main() {
    char c;
    char s[100];
    int i;
    scanf("%c", &c);
    scanf("%s", s);
    int count = 0;
    for ( i = 0; i < strlen(s); i++){
        if (s[i] == c){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

