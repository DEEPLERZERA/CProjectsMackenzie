#include <stdio.h>
#include <string.h>

int main() {
    char x[100];
    char y[100]; 
    
    scanf("%s", x);
    scanf(" %s", y);
    
    for(int i = 0; i < strlen(x); i++) {
        if(x[i] == y[i]) {
            printf("%c é IGUAL a %c\n", x[i], y[i]);
        }
        else {
            printf("%c é DIFERENTE de %c\n", x[i], y[i]);
        }
    }
    return 0;
}