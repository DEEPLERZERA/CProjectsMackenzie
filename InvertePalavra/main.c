#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    char invertido[100];
    scanf("%s", palavra);
    
    for(int i = 0; i < strlen(palavra); i++) {
        invertido[i] = palavra[(strlen(palavra) - 1) - i];
    }
    printf("%s", invertido);
    
    return 0;   
}