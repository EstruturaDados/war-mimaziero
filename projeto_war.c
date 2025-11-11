#include <stdio.h>
#include <string.h>

/*
  Programa: Cadastro de Territórios
  Descrição:
  O programa permite o cadastro de 5 territórios, armazenando o nome,
  a cor do exército e a quantidade de tropas de cada um. Após o cadastro,
  as informações são exibidas de forma organizada.
*/

/* 
   Definição da estrutura Territorio
   - nome: armazena o nome do território
   - cor: armazena a cor do exército
   - tropas: armazena a quantidade de tropas
*/
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5]; // Vetor para armazenar 5 territórios
    int i;

    printf("=== Cadastro de Territórios ===\n\n");

    // Laço de entrada dos dados
    for (i = 0; i < 5; i++) {
        printf("Cadastro do território %d:\n", i + 1);

        // Lê o nome do território
        printf("Digite o nome do território: ");
        scanf("%s", territorios[i].nome);

        // Lê a cor do exército
        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);

        // Lê o número de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\n=== Territórios Cadastrados ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n\n", territorios[i].tropas);
    }

    printf("Cadastro concluído com sucesso!\n");
    return 0;
}