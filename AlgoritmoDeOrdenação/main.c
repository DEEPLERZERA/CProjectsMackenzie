#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int vetorNumeros[100];
    int x = 0;
    int troquei = 0;
    int temp;
    srand(time(NULL));
    
    for (int i = 0; i < 100; i++) {
        vetorNumeros[i] = rand() % 100;
    }
    
    while (x == 0) {
        for (int i = 0; i < 99; i++) {
            if (vetorNumeros[i+1] < vetorNumeros[i]) {
                temp = vetorNumeros[i];
                vetorNumeros[i] = vetorNumeros[i+1];
                vetorNumeros[i+1] = temp;
                troquei = 1;
            }
        }
        
        if (troquei == 1) {
            troquei = 0;
        }
        else {
            x = 1;
        }
    }
    
    for (int i = 0; i < 100; i++) {
        printf("%i\n", vetorNumeros[i]);
    }
    
    return 0;
}