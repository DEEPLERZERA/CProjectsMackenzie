// Importando biblioteca -----------------------------------------------------------
#include <stdio.h>
#include <string.h>

// Função principal ----------------------------------------------------------------
int main() {
    // Gerando variáveis e arrays populados ----------------------------------------
    char *nomes[] = {"Andre", "Marcio", "Murilo", "João", "Grazi", "Palmeiras"};
    char *telefones[] = {"542387-233", "883392-543", "192385-123", "923425-956", "666543-934", "6666-6666"};
    int opcao;
    char nomeUsuario[100];
    char telefoneUsuario[100];
    int achou = 0;
    int Opcao = 0;
    int acesso;
    
    // Pegando filtro do usuário ---------------------------------------------------
    printf("Filtro 1-Nome 2-Telefone: ");
    scanf("%i", &opcao);
    
    // Entregando resultado ao usuário ---------------------------------------------
    if(opcao == 1) {
        printf("Digite um nome para fazermos o filtro: ");
        scanf("%s", nomeUsuario);
        for(int i = 0; i < 6; i++) {
            if(strcmp(nomeUsuario, nomes[i]) == 0) {
                acesso = i;
                achou = 1;
            }
        }
    }
    else if(opcao == 2) {
        printf("Digite um telefone para fazermos o filtro: ");
        scanf("%s", telefoneUsuario);
        for(int i = 0; i < 6; i++) {
            if(strcmp(telefoneUsuario, telefones[i]) == 0) {
                acesso = i;
                achou = 1;
            }
        }
    }
    else {
        printf("Esta opção não existe!");
        Opcao = 1;
    }
    
    // Se não achar o registro imprima erro ------------------------------------
    if(achou == 0 && Opcao == 0) {
        printf("Não encontrei o registro!");
    }
    
    // Se achar imprima valores ------------------------------------------------
    else if(achou == 1) {
           printf("Nome: %s\n", nomes[acesso]);
           printf("Telefone: %s", telefones[acesso]);
    }
    
    return 0;
}