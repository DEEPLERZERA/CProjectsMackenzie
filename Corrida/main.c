// Importando bibliotecas ----------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de ordenação de posição --------------------------------------------------
void ordenarPosicao(int percorrido[], char competidores[], int n){
    // Ordenação dos competidores por posição --------------------------------------
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if (percorrido[i] < percorrido[j])
            {
                //trocar posição ---------------------------------------------------
                int tempoPercorrido = percorrido[i];
                percorrido[i] = percorrido[j];
                percorrido[j] = tempoPercorrido;
    
                char tempoCorredor = competidores[i];
                competidores[i] = competidores[j];
                competidores[j] = tempoCorredor;
                }
            }
        }
}



// Iniciando função principal ------------------------------------------------------ 
int main() {
    
    // Declarando variáveis --------------------------------------------------------
    int a_percorrido = 0;
    int b_percorrido = 0;
    int c_percorrido = 0;
    int a_performa = 0;
    int b_performa = 0;
    int c_performa = 0;
    
    // Randomizando performace -----------------------------------------------------
        srand(time(NULL));
    
    // Iniciando iteração de 5 ciclos da corrida -----------------------------------
    for (int i = 0; i < 5; i++) {
        
        // Demonstrando número da volta para usuário -------------------------------
        printf("VOLTA %i\n\n", i+1);
        
        a_performa = rand() % 3 + 1;
        b_performa = rand() % 3 + 1;
        c_performa = rand() % 3 + 1;
        
        // Incremetando variáveis de valores de performance ------------------------
        a_percorrido += a_performa;
        b_percorrido += b_performa;
        c_percorrido += c_performa;
        
        // Desenhando na tela a corrida --------------------------------------------
        for (int j = 0; j < a_percorrido; j++) {
            printf(".");
        }
        
        printf("A==>\n");
        
        for (int y = 0; y < b_percorrido; y++) {
            printf(".");
        }
        
        printf("B==>\n");
        
        for (int u = 0; u < c_percorrido; u++) {
            printf(".");
        }
        
        printf("C==>\n");
        
        printf("\n");
    }
    
    // Pritando classificação da corrida na tela -----------------------------------
    printf("\nCLASSIFICACAO:\n\n");

    //Array que armazena a distancia -----------------------------------------------
    int percorrido[] = {a_percorrido, b_percorrido, c_percorrido};
    char competidores[] = {'A', 'B', 'C'};

    //tamanho do array -------------------------------------------------------------
    int n = sizeof(percorrido) / sizeof(percorrido[0]);
    
    // Chamando função de ordernação -----------------------------------------------
    ordenarPosicao(percorrido, competidores, n);

    // Exibe a classificação final
    int posicao = 1;
    for(int i = 0; i < n; i++){
        if(i > 0 && percorrido[i] == percorrido[i-1]){
            printf("%d-%c\n", posicao - 1, competidores[i]); // caso empate --------
        } else{
            printf("%d-%c\n", posicao, competidores[i]);
        }
        posicao++;
    }
    
    return 0;
}