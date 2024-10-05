// Importando bibliotecas -----------------------------------
#include <stdio.h>
#include <string.h>

// Função principal -----------------------------------------
int main() {
    // Declarando numero de livros da lista -----------------
    int n;
    
    // Coletando numero de livros ---------------------------
    printf("Digite o número de livros na lista: ");
    scanf("%i", &n);
    getchar();
    
    // Declarando variaveis adicionais ----------------------
    char livros[n][81];
    char livroResposta[81];
    int flag = 0;
    
    // Populando vetor de strings ---------------------------
    for (int i = 0; i < n; i++) {
        printf("Digite o título do livro %i: ", i+1);
        fgets(livros[i], 81, stdin);
        livros[i][strcspn(livros[i], "\n")] = '\0';
    }
    
    // Coletando nome do livro ------------------------------
    printf("Digite o título do livro que deseja buscar: ");
    fgets(livroResposta, 81, stdin);
    livroResposta[strcspn(livroResposta, "\n")] = '\0';
    
    // Varrendo vetor de strings para achar livro -----------
    for (int i = 0; i < n; i++) {
        if (strcmp(livros[i], livroResposta) == 0 && flag != 1) {
            printf("Livro Encontrado!\n");
            flag = 1;
        }
    }
    
    if (flag == 0) {
        printf("Não encontrado!\n");
    }
    return 0;
}