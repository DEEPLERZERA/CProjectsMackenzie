// Importando biblioteca --------------------------------------
#include <stdio.h>
#include <math.h>

// Importando função principal --------------------------------
int main() {
    // Importando variáveis -----------------------------------
    long lobosOrigem, ovelhasOrigem, lobos, ovelhas, nascimentosOvelhas, nascimentosLobos , arredondado, arredondado2, podeRodar;
    float casalDeOvelhas, casalDeLobos;
    // Pegando entradas ---------------------------------------
    printf("Digite numero de lobos: ");
    scanf("%li", &lobosOrigem);
    printf("Digite numero de ovelhas: ");
    scanf("%li", &ovelhasOrigem);
    lobos = lobosOrigem;
    ovelhas = ovelhasOrigem;
    nascimentosOvelhas = 0;
    nascimentosLobos = 0;
    casalDeOvelhas = 0;
    casalDeLobos = 0;
    podeRodar = 1;
    
    // Iniciando ciclo de 20 times ----------------------------
    for (int i = 0; i < 20; i++) {
        if (podeRodar == 1) {
            // Matando 5 ovelhas por cada lobo --------------------
            ovelhas -= 5 * lobos;
            
            // Achando numero de casais de ovelhas ----------------
            casalDeOvelhas = ovelhas/2;
            arredondado = round(casalDeOvelhas * 100) / 100;
            
            // Achando numero de casais de lobos ------------------
            casalDeLobos = lobos/2;
            arredondado2 = round(casalDeLobos * 100) / 100;
            
            // Procriando +5 por casal -----------------------------
            nascimentosOvelhas += arredondado * 5;
            ovelhas += nascimentosOvelhas;
            
            // Procriando mais 2 se atender condição --------------
            if (ovelhas > lobos * 1.2) {
                nascimentosLobos += arredondado2 * 2;
            }
            
            lobos += nascimentosLobos;
            
            // Verificando se temos lobos excedentes e removendo --
            if (ovelhas < lobos * 5) {
                lobos -= round((ovelhas / 5) * 100) / 100;
            }
            
            // Verificando se temos lobos negativos ou ovelhas negativas
            if (lobos <= 0 || ovelhas <= 0) {
                podeRodar = 0;
            }
            
            // Adicionando exceção ou printando resultado por ciclo
            if (ovelhas <= 0 && podeRodar == 0) {
                printf("%i - Ovelhas foram extintas!\n", i + 1);
            }
            
            if (lobos <= 0 && podeRodar == 0) {
                printf("%i - Lobos foram extintos!\n", i + 1);
            }
            
            if (podeRodar == 1) {
                printf("%i - Quantidade original de ovelhas %li e quantidade original de lobos %li\n", i + 1,ovelhasOrigem, lobosOrigem);
                printf("Quantidade total de nascimentos de ovelhas %li e nascimentos de lobos %li\n",nascimentosOvelhas, nascimentosLobos);
                printf("Quantidade total de ovelhas %li e de lobos %li\n\n", ovelhas, lobos);
                nascimentosLobos = 0;
                nascimentosOvelhas = 0;  
            }
        }
    }
    
    return 0;
}