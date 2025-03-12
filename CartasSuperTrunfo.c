#include <stdio.h>

int main() {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome);
    
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas
    printf("\n--- Dados da Cidade ---\n");
    printf("Codigo: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    return 0;
}
