#include <stdio.h>

 int main(){

    int populacao, populacao2;
    int turistico, turistico2;
    float area, pib, area2, densidade, densidade2, capita, capita2;
    char nome[30], nome2[30];
    double pib2;
    float SuperPoder, SuperPoder2;

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

    densidade = (float) populacao / area;

    capita = (float) pib / populacao;

    SuperPoder = (float) densidade + capita +  area + pib + populacao + turistico;

    printf("\n");
        
    printf("Digite total da populacao: \n");
    scanf("%i", &populacao2);
    
    printf("pib: \n");
    scanf("%lf", &pib2);

    printf("total de pontos turisticos: \n");
    scanf("%i", &turistico2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome2);
    
    densidade2 = populacao2 / area2;

    capita2 = pib2 / populacao2;

    printf("\n");

    SuperPoder2 = (float) densidade2 + capita2 +  area2 + pib2 + populacao2 + turistico2;

    printf("Carta 1\n");
    printf("Estado A\n");
    printf("Codigo A01\n");
    printf("Nome da Cidade: %s\n", nome);
    printf("Total populacao: %i\n", populacao);
    printf("Area km²: %.2f\n", area);
    printf("Produto Interno Bruto: %.2f\n", pib);
    printf("Total de pontos turisticos: %i\n", turistico);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", capita);
    printf("Super Poder: %.2f\n", SuperPoder);
    
    printf("\n");

    printf("Carta 2\n");
    printf("Estado B\n");
    printf("Codigo B02\n");
    printf("Nome da Cidade: %s\n", nome2);
    printf("Total populacao: %i\n", populacao2);
    printf("Area km²: %.2f\n", area2);
    printf("Produto Interno Bruto: %.2lf\n", pib2);
    printf("Total de pontos turisticos: %i\n", turistico2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", capita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    printf("Comparação das carta!\n");
    printf("Vale ressaltar aparecendo o valor 1, carta 1 ganhou, em caso de aparecer valor 0, carta 2 ganhou!\n");
    printf("Vencedor quesito População: %d\n", (populacao > populacao2));
    printf("Vencedor quesito Area km²: %d\n", (area > area2));
    printf("Vencedor quesito PIB: %d\n", (pib > pib2));
    printf("Vencedor quesito Pontos Turisticos: %d\n", (turistico > turistico2)); 
    printf("Vencedor quesito Densidade populacional: %d\n", (densidade < densidade2));
    printf("Vencedor quesito PIB per capita: %d\n", (pib > pib2));
    printf("Vencedor quesito Super Poder: %d\n", (SuperPoder > SuperPoder2));

    printf("\n");

    printf("Comparando as Cartas Vencedoras\n");
    printf("Primeiro quesito POPULAÇÂO\n");
    printf("Cidade %s população %d\n", nome, populacao);
    printf("Cidade %s população %d\n", nome2, populacao2);

    if (populacao > populacao2) {
      printf("Cidade %s ganhou\n", nome);
    } else {
      printf("Cidade %s ganhou\n", nome2);
    }

    printf("\n");
    
    printf("Segundo quesito AREA KM²\n");
    printf("Cidade %s Area km² %.2lf\n", nome, area);
    printf("Cidade %s Area km² %.2lf\n", nome2, area2);

    if (area > area2) {
      printf("Cidade %s ganhou\n", nome);
    } else {
      printf("Cidade %s ganhou\n", nome2);
    }
    
    printf("\n");
    
    printf("Terceiro quesito PRODUTO INTERNO BRUTO\n");
    printf("Cidade %s PIB %.2f\n", nome, pib);
    printf("Cidade %s PIB %.2lf\n", nome2, pib2);

    if (pib > pib2) {
      printf("Cidade %s ganhou\n", nome);
    } else {
      printf("Cidade %s ganhou\n", nome2);
    }
    
    printf("\n");

    printf("Quarto quesito PONTOS TURISTICOS\n");
    printf("Cidade %s Pontos turisticos %d\n", nome, turistico);
    printf("Cidade %s Pontos turisticos %d\n", nome2, turistico2);

    if (turistico > turistico2) {
      printf("Cidade %s ganhou\n", nome);
    } else {
      printf("Cidade %s ganhou\n", nome2);
    }

    printf("\n");
    
    printf("Quinto quesito DENSIDADE POPULACIONAL\n");
    printf("Cidade %s Densidade Populacional %.2f\n", nome, densidade);
    printf("Cidade %s Densidade Populacional %.2f\n", nome2, densidade2);

    if (densidade < densidade2) {
      printf("Cidade %s ganhou\n", nome);
    } else {
      printf("Cidade %s ganhou\n", nome2);
    }

    printf("\n");

    printf("Sexto quesito PIB PER CAPITA\n");
    printf("Cidade %s PIB PER CAPITA %.2f\n", nome, capita);
    printf("Cidade %s PIB PER CAPITA %.2f\n", nome2, capita2);

    if (capita > capita2) {
      printf("Cidade %s ganhou\n", nome);
    } else {
      printf("Cidade %s ganhou\n", nome2);
    }

    printf("\n");

    printf("Sexto quesito SUPER PODER\n");
    printf("Cidade %s SUPER PODER %.2f\n", nome, SuperPoder);
    printf("Cidade %s SUPER PODER %.2f\n", nome2, SuperPoder2);

    if (SuperPoder > SuperPoder2) {
      printf("Cidade %s ganhou\n", nome);
    } else {
      printf("Cidade %s ganhou\n", nome2);
    }   


    return 0;

 }