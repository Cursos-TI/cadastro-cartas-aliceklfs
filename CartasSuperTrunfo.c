#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta 1
  char estado1, codigoDaCarta1[10], cidade1[20];
  int  populacao1, pontosTuristicos1;
  float area1, pib1;
  
  //Carta 2
  char estado2, codigoDaCarta2[10], cidade2[20];
  int populacao2,  pontosTuristicos2;
  float area2, pib2;

  // Área para entrada de dados
  //Inserindo as informações da carta1
  printf("\nInforme os dados da primeira carta\n");
  printf("Digite uma letra de 'A' a 'H' que representa o estado da carta: ");
  scanf(" %c", &estado1);

  printf("Digite o código da primeira carta (a letra do estado que você digitou anteriormente seguida de um número - ex: A03,B05): ");
  scanf("%s", codigoDaCarta1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a area da cidade em quilômetros quadrados: ");
  scanf("%f", &area1);

  printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
  scanf("%f", &pib1);

  printf("Digite a quatidade de pontos turísticos na cidade: ");
  scanf("%d", &pontosTuristicos1);

  // Área para exibição dos dados da cidade
  //Imprimindo os resultados da CARTA1
  printf("\nInformaçoes do cadastro da primeira carta\n");
  printf("Carta 1 \n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigoDaCarta1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %f Km2\n", area1);
  printf("PIB: %f bilhões de reais\n", pib1);
  printf("Númedo de Pontos Turísticos: %d\n", pontosTuristicos1);

  // Área para entrada de dados
  //Inserindo as informações da carta2
  printf("\nInforme os dados da segunda carta\n");
  printf("Digite uma letra de 'A' a 'H' que representa o estado da carta: ");
  scanf(" %c", &estado2);

  printf("Digite o código da primeira carta (a letra do estado que você digitou anteriormente seguida de um número - ex: A03,B05): ");
  scanf("%s", codigoDaCarta2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a area da cidade em quilômetros quadrados: ");
  scanf("%f", &area2);

  printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
  scanf("%f", &pib2);

  printf("Digite a quatidade de pontos turísticos na cidade: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  //Imprimindo os resultados da CARTA2
  printf("\nInformaçoes do cadastro da segunda carta\n");
  printf("Carta 2 \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %f Km2\n", area2);
  printf("PIB: %f bilhões de reais\n", pib2);
  printf("Númedo de Pontos Turísticos: %d\n", pontosTuristicos2);
  
  return 0;
} 
