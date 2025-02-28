
#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado[20];
    char codigo_carta[4];
    char nome_cidade[20];
    int populacao;
    float area_km;
    float pib;
    int pontos_turisticos;

    // Leitura dos valores
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &area_km);
    printf("Digite o PIB: R$ ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos valores
    printf("\nEstado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area_km);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}






