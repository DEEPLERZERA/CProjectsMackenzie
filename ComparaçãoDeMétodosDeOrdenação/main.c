//---------------------------------PSEUDOCÓDIGO COMPARAÇÃO ENTRE MÉTODOS DE ORDENAÇÃO------------------------------------------------------------------
//1-Passo: Vamos declarar os seguintes vetores para ordenar eles com os algoritmos de Bubble Sort e Quick Sort:
//               
//            int vO(10000), vB(10000), vQ(10000)
//
//         Além disso vamos declarar as seguintes variáveis para utilizar nos métodos de ordenação:
//
//            int ordenou = 1 
//            int temp 
//       
//         E por último vamos declarar a struct para armazenar os dados temporais de cada método:
//
//            struct timeval tvalBS_Inicio, tvalBS_Fim, tvalQS_Inicio, tvalQS_Fim 
//
//2-Passo: Vamos fazer o sistema se tornar completamente randomico com a função srand(time(NULL))
//
//3-Passo: Após transformar o sistema em algo randomico, vamos popular o vetor vO com valores aleatorios e replicar estes valores para vB e vQ:
//
//            Vamos fazer um loop de i = 0, enquanto i < 10000 fazendo i++ a cada passo 
//
//              vO(i) = rand()
//              vB(i) = vO(i)
//              vQ(i) = vO(i)
//
//            fim do loop  
//
//4-Passo: Vamos iniciar o algoritmo de Bubble Sort, inicialmente coletando o horário de início do Bubble Sort e armazenando na variável
//           tvalBS_Inicio
//
//5-Passo: Faça um loop while enquanto a var Ordenou for igual a 1, 
//                 visando gerar a visão de se ordenou ou não 
//
//6-Passo:   ordenou = 0 
//
//7-Passo:   Faça um loop de i = 0, enquanto i < 9999 fazendo i++ a cada passo 
//
//             Compare Array(x) com Array(x + 1):
//               Se maior ou igual -> Troque a posição deles e 
//                                    ordenou = 1
//               Se menor -> Tudo ok prosseguir para o próximo par 
//
//           fim do loop
//
//8-Passo: Encerrar loop while 
//
//9-Passo: Finalize o Bubble Sort e armazene o horário de fim do método de ordenação na variável tvalBS_Fim
//
//10-Passo: Vamos iniciar o algoritmo de Quick Sort, inicialmente coletando o horário de início do Quick Sort e armazenando na variável
//           tvalQS_Inicio
//
//11-Passo: Vamos criar uma função de quick sort chamada de quickSortInterativo com os seguintes parâmetros:
//
//           (int array[], int maxTamanho, int tamanho)
//
//           Dentro desta função nós vamos cumprir as seguintes tarefas:
//
//             Verifique se tamanho é menor do que 2:
//               Se sim -> Retorne e feche função
//               Se não -> Prossiga com a função
//
//             Vamos declarar meu array de 10000 elementos 
//             Vamos declarar meus vetores parte 1 e parte 2 
//             Vamos declarar o tamanho do primeiro vetor e do segundo vetor 
//             Vamos declarar nosso pivoCount
//             Vamos criar nosso pivo que será o valor do meu array no índice [tamanho / 2], onde tamanho é 10000 sendo o tamanho do meu vetor original
//
//12-Passo:    Vamos nos direcionar para uma função chamada separaPivo com os seguintes parâmetros:
//
//               (int *vetor, int maximoVetor, int elementosVetor, int *vetorParte1, int *vetorParte2, int *tamParte1, int *tamParte2, int *pivoCount)
//
//               Dentro desta função nós vamos cumprir as seguinte tarefas:
//
//                 Declarar as variáveis de controle p e d inicialmente iguais a 0 
//                 Puxar do ponteiro o tamParte1 e o tamParte2 referente ao tamanho dos vetores segregados parte 1 e 2 
//                 Puxar do ponteiro o pivoCount para controle do número de pivos no Quick Sort 
//                 Declarar pivo que se forma a partir do meu array no índice [elementosVetor / 2], onde elementosVetor é 10000 (Já citado acima)
//
//13-Passo:        Faça um loop de i = 0, enquanto i < elementosVetor fazendo i++ a cada passo
//
//                    Compare vetor(i) com pivo:
//                       Se menor que pivo  -> Faça vetorParte1(p) = vetor(i), 
//                                             aumente o valor de p e 
//                                             aumente o valor de tamParte1 
//                       Se maior que pivo  -> Faça vetorParte2(p) = vetor(i),
//                                             aumente o valor de d e 
//                                             aumente o valor de tamParte2
//                       Caso igual ao pivo -> aumente pivoCount
//
//                 fim do loop
//
//             Fim de função
//
//14-Passo:    Verifique se tamParte1 é maior do que 1:
//               Se sim -> Chamamos a função quickSortInterativo passando os parâmetros (vetorParte1, maxTamanho, tamParte1) -> Gerando recursividade
//               Se não -> Prossiga sem entrar na função quickSortInterativo
//
//             Verifique se tamParte2 é maior do que 1:
//               Se sim -> Chamamos a função quickSortInterativo passando os parâmetros (vetorParte2, maxTamanho, tamParte2) -> Gerando recursividade
//               Se não -> Prossiga sem entrar na função quickSortInterativo
//
//15-Passo:    Vamos nos direcionar para uma função chamada juntaListas com os seguintes parâmetros:
//
//               (int *vetor, int *lista1, int *lista2, int tam1, int tam2, int pivo, int pivoCount)
//
//               Dentro desta função nós vamos cumprir as seguinte tarefas:
//
//                 Declarar p igual a -1
//             
//16-Passo:        Faça um loop de i = 0 enquanto i < tam1 fazendo i++ a cada passo
//  
//                    Faça p++ a cada passo 
//                    O meu vetor na posição p recebe lista1 na posição i 
//
//                 fim do loop
//
//17-Passo:        Faça um loop de i = 0 enquanto i < pivoCount fazendo i++ a cada passo 
//
//                    Faça p++ a cada passo 
//                    O meu vetor na posição p recebe pivo
//
//                 fim do loop 
//
//18-Passo:        Faça um loop de i = 0 enquanto i < tam2 fazendo i++ a cada passo
//
//                    Faça p++ a cada passo 
//                    O meu vetor na posição p recebe lista2 na posição i
//
//                 fim do loop 
//
//            Fim de função
//
//19-Passo:   Libere vetorParte1 e vetorParte2
//
//20-Passo: Finalize o Quick Sort e armazene o horário de fim do método de ordenação na variável tvalQS_Fim
//
//21-Passo: Imprimir tempos de execução do Bubble Sort e do Quick Sort com a seguinte fórmula:
//
//             (double) (tvalBS_Fim.tv_usec - tvalBS_Inicio.tv_usec) / 1000000 + (double) (tvalBS_Fim.tv_sec - tvalBS_Inicio.tv_sec))
//             (double) (tvalQS_Fim.tv_usec - tvalQS_Inicio.tv_usec) / 1000000 + (double) (tvalQS_Fim.tv_sec - tvalQS_Inicio.tv_sec))
//----------------------------------------FIM DO CÓDIGO------------------------------------------------------------------------------------------------

// Importando biblioteca ------------------------------------------------------------------------------------------------------------------------------ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

// Criando função que imprime array ------------------------------------------------------------------------------------------------------------------- 
void imprimeArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%i ", array[i]);
    }
    printf("\n");
}

// Criando função que junta listas -------------------------------------------------------------------------------------------------------------------- 
void juntaListas(int *vetor, int *lista1, int *lista2, int tam1, int tam2, int pivo, int pivoCount) {
    int p = -1;
    for (int i = 0; i < tam1; i++) {
        p++;
        vetor[p] = lista1[i];
    }
    for (int i = 0; i < pivoCount; i++) {
        p++;
        vetor[p] = pivo;
    }
    for (int i = 0; i < tam2; i++) {
        p++;
        vetor[p] = lista2[i];
    }
}

// Criando função que separa listas por pivo ---------------------------------------------------------------------------------------------------------- 
void separaPivo(int *vetor, int maximoVetor, int elementosVetor, int *vetorParte1, int *vetorParte2, int *tamParte1, int *tamParte2, int *pivoCount) {
    int p = 0, d = 0;
    *tamParte1 = 0;
    *tamParte2 = 0;
    *pivoCount = 0;
    int pivo = vetor[elementosVetor / 2];
    for (int i = 0; i < elementosVetor; i++) {
        if (vetor[i] < pivo) {
            vetorParte1[p] = vetor[i];
            p++;
            (*tamParte1)++;
        } else if (vetor[i] > pivo) {
            vetorParte2[d] = vetor[i];
            d++;
            (*tamParte2)++;
        } else {
            (*pivoCount)++;
        }
    }
}

// Criando função que realiza quick sort --------------------------------------------------------------------------------------------------------------
void quickSortInterativo(int array[], int maxTamanho, int tamanho) {
    if (tamanho < 2) return;

    int *vetorParte1 = (int *)malloc(tamanho * sizeof(int));
    int *vetorParte2 = (int *)malloc(tamanho * sizeof(int));
    int tamParte1, tamParte2, pivoCount;
    int pivo = array[tamanho / 2];

    separaPivo(array, maxTamanho, tamanho, vetorParte1, vetorParte2, &tamParte1, &tamParte2, &pivoCount);
    
    if (tamParte1 > 1) {
        quickSortInterativo(vetorParte1, maxTamanho, tamParte1);
    }
    if (tamParte2 > 1) {
        quickSortInterativo(vetorParte2, maxTamanho, tamParte2);
    }
    
    juntaListas(array, vetorParte1, vetorParte2, tamParte1, tamParte2, pivo, pivoCount);
    
    free(vetorParte1);
    free(vetorParte2);
}

// Criando função principal ---------------------------------------------------------------------------------------------------------------------------
int main() {
// Declarando vetores para rodar algoritmos -----------------------------------------------------------------------------------------------------------
    int vO[10000];
    int vB[10000];
    int vQ[10000];
    int ordenou = 1;
    int temp;
    
    struct timeval tvalBS_Inicio, tvalBS_Fim, tvalQS_Inicio, tvalQS_Fim;
    
// Gerando sistema randomico --------------------------------------------------------------------------------------------------------------------------
    srand(time(NULL));

    for (int i = 0; i < 10000; i++) {
        vO[i] = rand();
        vB[i] = vO[i];
        vQ[i]= vO[i];
    }
    
// Iniciando Bubble Sort ------------------------------------------------------------------------------------------------------------------------------
   printf("Bubble Sort:\n\n");
   printf("- Início\n");
   gettimeofday (&tvalBS_Inicio, NULL);
   
   printf("- Ordenando\n");

// Implementando Bubble Sort --------------------------------------------------------------------------------------------------------------------------
    while (ordenou == 1) {
        ordenou = 0;
        for (int i = 0; i < 9999; i++) {
            if (vB[i + 1] < vB[i]) {
                temp = vB[i];
                vB[i] = vB[i + 1];
                vB[i + 1] = temp;
                ordenou = 1;
            }
        }
    }
    
// Finalizando Bubble Sort ----------------------------------------------------------------------------------------------------------------------------    
    printf("- Fim\n");
    gettimeofday (&tvalBS_Fim, NULL);
    printf("\n\n\n");

// Iniciando Quick Sort -------------------------------------------------------------------------------------------------------------------------------
    printf("Quick Sort\n\n");
    printf("- Início\n");
    gettimeofday (&tvalQS_Inicio, NULL);
    
    printf("- Ordenando\n");

// Implementando Quick Sort ---------------------------------------------------------------------------------------------------------------------------
    quickSortInterativo(vQ, 10000, 10000);

// Finalizando Quick Sort -----------------------------------------------------------------------------------------------------------------------------
    printf("- Fim\n");
    gettimeofday (&tvalQS_Fim, NULL);
    printf("\n\n\n");
    
// Imprimindo tempos de Bubble Sort e Quick Sort ------------------------------------------------------------------------------------------------------
    printf ("Tempo Total\n");
    printf ("Bubble Sort = %.3f seconds\n", (double) (tvalBS_Fim.tv_usec - tvalBS_Inicio.tv_usec) / 1000000 + (double) (tvalBS_Fim.tv_sec - tvalBS_Inicio.tv_sec));
    printf ("Quick Sort = %.3f seconds\n", (double) (tvalQS_Fim.tv_usec - tvalQS_Inicio.tv_usec) / 1000000 + (double) (tvalQS_Fim.tv_sec - tvalQS_Inicio.tv_sec));
    
    return 0;
}