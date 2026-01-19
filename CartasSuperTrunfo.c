// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível aventureiro você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.

#include <stdio.h>
#include <string.h>

//Variáveis globais
//Carta 1
char estado1[3]; 
char codigoDaCarta1[5], cidade1[100];
unsigned long int  populacao1;
int pontosTuristicos1;
float area1, pib1;

//Carta 2
char estado2[3]; 
char codigoDaCarta2[5], cidade2[100];
unsigned long int populacao2;
int  pontosTuristicos2;
float area2, pib2;

//Resultados globais 
float densidadePopulacional1, pibPerCapita1, inversoDensidadePopulacional1,  superPoder1; //Carta 1
float densidadePopulacional2, pibPerCapita2, inversoDensidadePopulacional2, superPoder2; //Carta 2

// ========= FUNÇÕES =========
//Função para entrada de dados
void entradaDedados() {
  //Carta 1
  printf("\nInforme os dados da primeira carta\n");

  printf("Digite uma letra de 'A' a 'H' que representa o estado da carta: ");
  fgets(estado1, sizeof(estado1), stdin);
  estado1[strcspn(estado1, "\n")] = 0;

  printf("Digite o código da primeira carta (a letra do estado que você digitou anteriormente seguida de um número - ex: A03,B05): ");
  fgets(codigoDaCarta1, sizeof(codigoDaCarta1), stdin);
  codigoDaCarta1[strcspn(codigoDaCarta1, "\n")] = 0;

  printf("Digite o nome da cidade: ");
  fgets(cidade1, sizeof(cidade1), stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;

  printf("Digite o número de habitantes da cidade (população): ");
  scanf("%lu", &populacao1);

  printf("Digite a área da cidade em quilômetros quadrados: ");
  scanf("%f", &area1);

  printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
  scanf("%f", &pib1);

  printf("Digite a quatidade de pontos turísticos na cidade: ");
  scanf("%d", &pontosTuristicos1);

  //Carta 2
  printf("\nInforme os dados da segunda carta\n");
  scanf("%*c");

  printf("Digite uma letra de 'A' a 'H' que representa o estado da carta: ");
  fgets(estado2, sizeof(cidade2), stdin);
  estado2[strcspn(estado2, "\n")] = 0;

  printf("Digite o código da primeira carta (a letra do estado que você digitou anteriormente seguida de um número - ex: A03,B05): ");
  fgets(codigoDaCarta2, sizeof(codigoDaCarta2), stdin);
  codigoDaCarta2[strcspn(codigoDaCarta2, "\n")] = 0;

  printf("Digite o nome da cidade: ");
  fgets(cidade2, sizeof(cidade2),stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;

  printf("Digite o número de habitantes da cidade (população): ");
  scanf("%lu", &populacao2);

  printf("Digite a área da cidade em quilômetros quadrados: ");
  scanf("%f", &area2);

  printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
  scanf("%f", &pib2);

  printf("Digite a quatidade de pontos turísticos na cidade: ");
  scanf("%d", &pontosTuristicos2);
}

//Função para calcular densidade populacional e PIB per capita
void calcularDados() {
  //Carta 1
  densidadePopulacional1 = (float) populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1; // PIB em reais / população
  inversoDensidadePopulacional1 = area1 / (float) populacao1;


  //Carta 2
  densidadePopulacional2 = (float) populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2; // PIB em reais / população
  inversoDensidadePopulacional2 = area2 / (float) populacao2;
}

//Função para o super poder
void superPoder() {
  //Carta 1
  superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + inversoDensidadePopulacional1;

  //Carta 2
  superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + inversoDensidadePopulacional2;
}

//Função para imprimir na tela as informações de saída das cartas
void saidaDeDados() {
  //Carta 1
  printf("\nInformaçoes do cadastro da primeira carta\n");
  printf("Carta 1 \n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigoDaCarta1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f Km2\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Númedo de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  //Carta 2
  printf("\nInformaçoes do cadastro da segunda carta\n");
  printf("Carta 2 \n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f Km2\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Númedo de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);
}

void resultadoComparacaoCartas() {
  printf("\n");
  printf("Comparação das cartas\n");
  printf("Populacao: Carta %lu venceu (%lu)\n", 2 -(populacao1 > populacao2), populacao1 > populacao2);
  printf("Área: Carta %d venceu (%d)\n", 2 - (area1 > area2), area1 > area2);
  printf("PIB: Carta %d venceu (%d)\n", 2 - (pib1 > pib2), pib1 > pib2);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - (pontosTuristicos1 > pontosTuristicos2), pontosTuristicos1 > pontosTuristicos2);
  printf("Densidade Populacional: Carta %d venceu (%d)\n",
       2 - (densidadePopulacional1 > densidadePopulacional2), 
       (densidadePopulacional1 > densidadePopulacional2) ? densidadePopulacional2 : 0);
  printf("PIB: Carta %d venceu (%d)\n", 2 - (pibPerCapita1 > pibPerCapita2), pibPerCapita1 > pibPerCapita2);
    
  printf("Super Poder: Carta %d venceu (%d)\n", 2 - (superPoder1 > superPoder2), superPoder1 > superPoder2);
}

int main() {
  entradaDedados();
  calcularDados();
  superPoder();
  saidaDeDados();
  resultadoComparacaoCartas();

  return 0;
} 
