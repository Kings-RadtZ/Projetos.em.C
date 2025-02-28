
#include <stdio.h>
// Declaração das variáveis 
int main (){
char estado [20]
char codigo carta [4]
char nome cidade [20]
int populacao;
float area km;
float pib;
int pontos turistico;

// Leitura dos valores
printf("digite o código da carta:");
scanf("%s", estado);
printf("digite o código da carta:");
scanf("%s", codigo carta);
printf("digite o nome da cidade:");
scanf("%s", nome cidade);
printf("digite a população:");
scanf("%d", &populacao );
printf("digite a area em km:");
scanf("%d", &area km);
printf("digite o pib: R$");
scanf("%f", &pib);
printf("digite o número de pontos turísticos:");
scanf("%d", &pontos turistico);

// Exibiçãoes dos valores 

printf("\nEstado: %s\n", estado);
printf("codigo da carta: %s\n", codigo carta);
printf("nome da cidade: %s\n", nome cidade);
printf("populacao: %d\n", populacao);
printf("area em km: %.2f\n", area km);
printf("pib: R$ %.2f\n", pib);
printf("ponto turisticos: %d\n", pontos turisticos);

return 0;



}



