#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível aventureiro você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.

//Variáveis globais
//Carta 1
char estado1, codigoDaCarta1[10], cidade1[20];
int  populacao1, pontosTuristicos1;
float area1, pib1;

//Carta 2
char estado2, codigoDaCarta2[10], cidade2[20];
int populacao2,  pontosTuristicos2;
float area2, pib2;

//Resultados globais 
float densidadePopulacional1, pibPerCapita1, densidadePopulacional2, pibPerCapita2;

// ========= FUNÇÕES =========
//Função para entrada de dados
void entradaDedados() {
  //Carta 1
  printf("\nInforme os dados da primeira carta\n");
  printf("Digite uma letra de 'A' a 'H' que representa o estado da carta: ");
  scanf(" %c", &estado1);

  printf("Digite o código da primeira carta (a letra do estado que você digitou anteriormente seguida de um número - ex: A03,B05): ");
  scanf("%s", codigoDaCarta1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite o número de habitantes da cidade (população): ");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade em quilômetros quadrados: ");
  scanf("%f", &area1);

  printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
  scanf("%f", &pib1);

  printf("Digite a quatidade de pontos turísticos na cidade: ");
  scanf("%d", &pontosTuristicos1);

  //Carta 2
  printf("\nInforme os dados da segunda carta\n");
  printf("Digite uma letra de 'A' a 'H' que representa o estado da carta: ");
  scanf(" %c", &estado2);

  printf("Digite o código da primeira carta (a letra do estado que você digitou anteriormente seguida de um número - ex: A03,B05): ");
  scanf("%s", codigoDaCarta2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite o número de habitantes da cidade (população): ");
  scanf("%d", &populacao2);

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
  pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1; 

  //Carta 2
  densidadePopulacional2 = (float) populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2; 
}

//Função para imprimir na tela as informações de saída das cartas
void saidaDeDados() {
  //Carta 1
  printf("\nInformaçoes do cadastro da primeira carta\n");
  printf("Carta 1 \n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigoDaCarta1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km2\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Númedo de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  //Carta 2
  printf("\nInformaçoes do cadastro da segunda carta\n");
  printf("Carta 2 \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km2\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Númedo de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
}

int main() {
  entradaDedados();
  calcularDados();
  saidaDeDados();
  
  return 0;
} 
