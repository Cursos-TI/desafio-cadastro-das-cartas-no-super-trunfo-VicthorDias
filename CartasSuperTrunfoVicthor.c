#include <stdio.h>

 int main(){

    int populacao, populacao2;
    int turistico, turistico2;
    float area, pib, area2, pib2;
    char nome[30], nome2[30];

    printf("Digite total da populacao: \n");
    scanf("%i", &populacao);

    printf("pib: \n");
    scanf("%f", &pib);

    printf("total de pontos turisticos: \n");
    scanf("%i", &turistico);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome);
        
    printf("Digite total da populacao: \n");
    scanf("%i", &populacao2);

    printf("pib: \n");
    scanf("%f", &pib2);

    printf("total de pontos turisticos: \n");
    scanf("%i", &turistico2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome2);

    printf("\n");

    printf("Carta 1\n");
    printf("Estado A\n");
    printf("Codigo A01\n");
    printf("Nome da Cidade: %s\n", nome);
    printf("Total populacao: %i\n", populacao);
    printf("Area km²: %.1f\n", area);
    printf("Produto Interno Bruto: %.1f\n", pib);
    printf("Total de pontos turisticos: %i\n", turistico);
    
    printf("\n");

    printf("Carta 2\n");
    printf("Estado B\n");
    printf("Codigo B02\n");
    printf("Nome da Cidade: %s\n", nome2);
    printf("Total populacao: %i\n", populacao2);
    printf("Area km²: %.1f\n", area2);
    printf("Produto Interno Bruto: %.1f\n", pib2);
    printf("Total de pontos turisticos: %i\n", turistico2);

 }