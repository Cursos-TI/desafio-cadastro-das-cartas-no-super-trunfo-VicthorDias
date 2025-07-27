#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(){

    int populacao, populacao2, opcao, populacaomaquina, opcaoatributo, opcaoatributo2;
    int turistico, turistico2, turisticomaquina, cartajogador1, cartajogador2;
    double area, area2, areamaquina, pib, densidade, densidade2, densidademaquina, capita, capita2, capitamaquina;
    char nome[30], nome2[30];
    double pib2, pibmaquina, SuperPoderMaquina;
    double SuperPoder, SuperPoder2;

    srand(time(0));
    char* cidade_maquina[] = {"da Luz", "do Sol", "da Esperança"};
    char* nomemaquina = cidade_maquina[rand() % 3];
    
    printf("*** Super trunfo ***\n");
    printf("Digite uma das opções do Menu\n");
    printf("1. iniciar jogo 2 players\n");
    printf("2. Iniciar jogo contra Máquina\n");
    printf("3. Ver Regras\n");
    printf("4. Sair do jogo\n");
    scanf("%i", &opcao);

    
    switch (opcao) {
    case 1:
      printf("Iniciando o Jogo com 2 players\n");

      cartajogador1 = rand() % 10 + 1;

      printf("Jogador 1 sua carta é a carta de numero: %i\n", cartajogador1);

      printf("Lance sua cidade com seus atributos\n");

      printf("Digite total da população: \n");
      scanf("%i", &populacao);

      printf("pib: \n");
      scanf("%lf", &pib);

      printf("total de pontos turisticos: \n");
      scanf("%i", &turistico);

      printf("Digite a area: \n");
      scanf("%lf", &area);

      printf("Digite o nome da Cidade: \n");
      scanf("%s", nome);

      densidade = (double) populacao / area;

      capita = (double) pib / populacao;

      SuperPoder = (double) densidade + capita +  area + pib + populacao + turistico;

      printf("\n");

      cartajogador2 = rand() % 10 + 1;
      if (cartajogador2 == cartajogador1) {
        cartajogador2++;
      };

      printf("Jogador 2 sua carta é a carta de numero: %i\n", cartajogador2);

      printf("Lance sua cidade com seus atributos\n");
        
      printf("Digite total da populacao: \n");
      scanf("%i", &populacao2);
    
      printf("pib: \n");
      scanf("%lf", &pib2);

      printf("total de pontos turisticos: \n");
      scanf("%i", &turistico2);

      printf("Digite a area: \n");
      scanf("%lf", &area2);

      printf("Digite o nome da Cidade: \n");
      scanf("%s", nome2);
    
      densidade2 = populacao2 / area2;

      capita2 = pib2 / populacao2;

      printf("\n");

      SuperPoder2 = (double) densidade2 + capita2 +  area2 + pib2 + populacao2 + turistico2;

      printf("Carta 1\n");
      printf("Estado A\n");
      printf("Codigo A01\n");
      printf("Nome da Cidade: %s\n", nome);
      printf("Total populacao: %i\n", populacao);
      printf("Area km²: %.2lf\n", area);
      printf("Produto Interno Bruto: %.2lf\n", pib);
      printf("Total de pontos turisticos: %i\n", turistico);
      printf("Densidade populacional: %.2lf\n", densidade);
      printf("PIB per capita: %.2lf\n", capita);
      printf("Super Poder: %.2lf\n", SuperPoder);
    
      printf("\n");

      printf("Carta 2\n");
      printf("Estado B\n");
      printf("Codigo B02\n");
      printf("Nome da Cidade: %s\n", nome2);
      printf("Total populacao: %i\n", populacao2);
      printf("Area km²: %.2lf\n", area2);
      printf("Produto Interno Bruto: %.2lf\n", pib2);
      printf("Total de pontos turisticos: %i\n", turistico2);
      printf("Densidade populacional: %.2lf\n", densidade2);
      printf("PIB per capita: %.2lf\n", capita2);
      printf("Super Poder: %.2lf\n", SuperPoder2);

    printf("\n*** Comparação de Atributos ***\n");
    printf("Selecione um dos atributos\n");
    printf("1. População\n");
    printf("2. Area km²\n");
    printf("3. Produto interno Bruto\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demografica\n");
    scanf("%i", &opcaoatributo);

      switch (opcaoatributo)
      {
      case 1:
      printf("\nPopulação\n");
      printf("Cidade %s população %i contra Cidade %s população %i\n", nome, populacao, nome2, populacao2);

      if (populacao > populacao2)
      {printf("Cidade %s venceu\n", nome);
      } else if (populacao < populacao2)
      {
      printf ("Cidade %s venceu\n", nome2);
      } else {
        printf("Empate");
      };
      break;

      case 2:
      printf("\n Area km²\n");
      printf("Cidade %s area km² %.2lf contra Cidade %s area km² %.2lf", nome, area, nome2, area2);

      if (area > area2)
      {printf("Cidade %s venceu\n", nome);
      } else if (area < area2)
      {
      printf ("Cidade %s venceu\n", nome2);
      } else {
        printf("Empate");
      };
      break;

      case 3:
      printf("\n Produto interno Bruto\n");
      printf("Cidade %s PIB %.2lf contra Cidade %s PIB %.2lf", nome, pib, nome2, pib2);

      if (pib > pib2)
      {printf("Cidade %s venceu\n", nome);
      } else if (pib < pib2)
      {
      printf ("Cidade %s venceu\n", nome2);
      } else {
        printf("Empate");
      };
      break;
      case 4:
      printf("\n Pontos turísticos\n");
      printf("Cidade %s P.T. %i contra Cidade %s P.T. %i", nome, turistico, nome2, turistico2);

      if (turistico > turistico2)
      {printf("Cidade %s venceu\n", nome);
      } else if (turistico < turistico2)
      {
      printf ("Cidade %s venceu\n", nome2);
      } else {
        printf("Empate\n");
      };
      break;
      case 5:
      printf("\n Densidade Demografica\n");
      printf("Cidade %s D.D. %.2lf contra Cidade %s D.D. %.2lf\n", nome, densidade, nome2, densidade2);

      if (densidade > densidade2)
      {printf("Cidade %s venceu\n", nome);
      } else if (densidade < densidade2)
      {
      printf ("Cidade %s venceu\n", nome2);
      } else {
        printf("Empate\n");
      };
      break;
      
      }
      break;
    case 2:
      printf("Iniciando o jogo contra a Máquina\n");

      printf("Jogador lance sua cidade com seus atributos\n");

      printf("Digite total da população: \n");
      scanf("%i", &populacao);

      printf("pib: \n");
      scanf("%lf", &pib);

      printf("total de pontos turisticos: \n");
      scanf("%i", &turistico);

      printf("Digite a area: \n");
      scanf("%lf", &area);

      printf("Digite o nome da Cidade: \n");
      scanf("%s", nome);

      densidade = (double) populacao / area;

      capita = (double) pib / populacao;

      SuperPoder = (double) densidade + capita +  area + pib + populacao + turistico;

      printf("\nCarta 1\n");
      printf("Estado A\n");
      printf("Codigo A01\n");
      printf("Nome da Cidade: %s\n", nome);
      printf("Total populacao: %i\n", populacao);
      printf("Area km²: %.2f\n", area);
      printf("Produto Interno Bruto: %.2lf\n", pib);
      printf("Total de pontos turisticos: %i\n", turistico);
      printf("Densidade populacional: %.2lf\n", densidade);
      printf("PIB per capita: %.2lf\n", capita);
      printf("Super Poder: %.2lf\n", SuperPoder);

      printf("\n");
      populacaomaquina = rand() % (10000000 - 100000 + 1) + 100000;
      areamaquina = 100.0 + (rand() % 900) + (rand() % 100) / 100.0;
      pibmaquina = 10000000000.00 + ((double)rand() / RAND_MAX) * (99999999999.99 - 10000000000.0);
      turisticomaquina = rand() % 50 + 1;
      
      densidademaquina = (double) populacaomaquina / areamaquina;

      capitamaquina = (double) pibmaquina / populacaomaquina;

      SuperPoderMaquina = (double) densidademaquina + capitamaquina +  areamaquina + pibmaquina + populacaomaquina + turisticomaquina;

      printf("Carta Máquina\n");
      printf("Estado B\n");
      printf("Codigo B02\n");
      printf("Nome da Cidade: %s\n", nomemaquina);
      printf("Total populacao: %i\n", populacaomaquina);
      printf("Area km²: %.2lf\n", areamaquina);
      printf("Produto Interno Bruto: %.2lf\n", pibmaquina);
      printf("Total de pontos turisticos: %i\n", turisticomaquina);
      printf("Densidade populacional: %.2lf\n", densidademaquina);
      printf("PIB per capita: %.2lf\n", capitamaquina);
      printf("Super Poder: %.2lf\n", SuperPoderMaquina);

          printf("\n*** Comparação de Atributos ***\n");
          printf("Selecione um dos atributos\n");
          printf("1. População\n");
          printf("2. Area km²\n");
          printf("3. Produto interno Bruto\n");
          printf("4. Pontos turisticos\n");
          printf("5. Densidade demografica\n");
          scanf("%i", &opcaoatributo2);

          switch (opcaoatributo2)
          {
          case 1:
          printf("\nPopulação\n");
          printf("Cidade %s população %i contra Cidade %s população %i\n", nome, populacao, nomemaquina, populacaomaquina);

          if (populacao > populacaomaquina)
          {printf("Cidade %s venceu\n", nome);
          } else if (populacao < populacaomaquina)
          {
          printf ("Cidade %s venceu\n", nomemaquina);
          } else {
            printf("Empate");
          };
          break;

          case 2:
          printf("\n Area km²\n");
          printf("Cidade %s area km² %.2f contra Cidade %s area km² %.2lf\n", nome, area, nomemaquina, areamaquina);

          if (area > areamaquina)
          {printf("Cidade %s venceu\n", nome);
          } else if (area < areamaquina)
          {
          printf ("Cidade %s venceu\n", nomemaquina);
          } else {
            printf("Empate");
          };
          break;

          case 3:
          printf("\n Produto interno Bruto\n");
          printf("Cidade %s PIB %.2lf contra Cidade %s PIB %.2lf\n", nome, pib, nomemaquina, pibmaquina);

          if (pib > pibmaquina)
          {printf("Cidade %s venceu\n", nome);
          } else if (pib < pibmaquina)
          {
          printf ("Cidade %s venceu\n", nomemaquina);
          } else {
            printf("Empate");
          };
          break;
          case 4:
          printf("\n Pontos turísticos\n");
          printf("Cidade %s P.T. %i contra Cidade %s P.T. %i\n", nome, turistico, nomemaquina, turisticomaquina);

          if (turistico > turisticomaquina)
          {printf("Cidade %s venceu\n", nome);
          } else if (turistico < turisticomaquina)
          {
          printf ("Cidade %s venceu\n", nomemaquina);
          } else {
            printf("Empate");
          };
          break;
          case 5:
          printf("\n Densidade Demografica\n");
          printf("Cidade %s D.D. %.2lf contra Cidade %s D.D. %.2lf\n", nome, densidade, nomemaquina, densidademaquina);

          if (densidade > densidademaquina)
          {printf("Cidade %s venceu\n", nome);
          } else if (densidade < densidademaquina)
          {
          printf ("Cidade %s venceu\n", nomemaquina);
          } else {
            printf("Empate\n");
          }
          break;

        }

      break;
      case 3:
        printf("*Regras do Jogo*\n");
        printf("Selecione 10 cidades aleatoriamente da vida real, jogue enumere elas de 1 a 10, e jogue o dado virtual, que aparecerá logo ao iniciar o game, uma vez para cada jogador para cada jogador decidindo assim quem ficará com qual carta,");
        printf("Após isso lance as informações da cidade\n");
        printf("Ao jogar contra a máquina, todos os atributos serão gerados por inteligencia artificial");
        break;
      case 4:
        printf("Saindo do Jogo\n");
        break;
    
    default:
      printf("Opção inválida");
      break;
    }




    /*printf("Comparação das carta!\n");
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

    printf("Setimo quesito SUPER PODER\n");
    printf("Cidade %s SUPER PODER %.2f\n", nome, SuperPoder);
    printf("Cidade %s SUPER PODER %.2f\n", nome2, SuperPoder2);

    if (SuperPoder > SuperPoder2) {
      printf("Cidade %s ganhou\n", nome);
    } else {
      printf("Cidade %s ganhou\n", nome2);
    }*/


    return 0;

 }