#include <stdio.h>

// Variaveis globais para armazenar os dados das cartas e exibição.
char estado_1[2];
char estado_2[2];
char codigo_1[3];
char codigo_2[3];
char nome_cidade_1[50]; 
char nome_cidade_2[50];
int populacao_1, populacao_2;
float area_1, area_2;
float pib_1, pib_2;
int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2;
// Funções para calcular densidade populacional e PIB per capita.
float calcularDensidade(int populacao, float area) {
    return (float) populacao / area;    
}

float calcularPibPerCapita(float pib, int populacao) {
    return (float) pib / populacao;
}

// Função para exibir os dados das cartas.
void exibirTrunfo()
{
   printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %c%s\n", estado_1, codigo_1);
    printf("Nome da cidade: %s\n", nome_cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f Km\n", area_1);
    printf("PIB: %.2f Bilhoes\n", pib_1);
    printf("Quantidade de pontos turisticos: %d\n", qtd_pontos_turisticos_1);
    printf("Densidade populacional: %.2f habitantes/Km\n", calcularDensidade(populacao_1, area_1));
    printf("PIB per capita: %.2f\n", calcularPibPerCapita(pib_1, populacao_1));

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %c%s\n", estado_2, codigo_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f Km\n", area_2);
    printf("PIB: %.2f Bilhoes\n", pib_2);
    printf("Quantidade de pontos turisticos: %d\n", qtd_pontos_turisticos_2);
    printf("Densidade populacional: %.2f habitantes/Km\n", calcularDensidade(populacao_2, area_2));
    printf("PIB per capita: %.2f\n", calcularPibPerCapita(pib_2, populacao_2));

}

// Função para coletar os dados das cartas.
void coletarDados()
{

    printf("Bem-vindo ao jogo de cartas Super Trunfo\n");
    printf(" Vamos preencher os dados da carta 1\n");
    printf("Digite um estado de A a H: ");
    scanf(" %1s", estado_1);
    printf("\nDigite o codigo da carta (de 01 a 04):\n");
    scanf(" %2s", codigo_1);
    printf("\nDigite o nome da cidade:\n");
    scanf(" %49s", nome_cidade_1);
    printf("\nDigite a populacao da cidade:\n");
    scanf(" %d", &populacao_1);
    printf("\nDigite a area da cidade:\n");
    scanf(" %f", &area_1);
    printf("\nDigite o PIB da cidade:\n");
    scanf(" %f", &pib_1);
    printf("\nDigite a quantidade de pontos turisticos:\n");
    scanf(" %d", &qtd_pontos_turisticos_1);
  
    

    printf("\nAgora vamos preencher os dados da carta 2\n");
    printf("Digite um estado de A a H:\n");
    scanf(" %1s", estado_2);
    printf("\nDigite o codigo da carta (de 01 a 04):\n");
    scanf(" %2s", codigo_2);
    printf("\nDigite o nome da cidade:\n");
    scanf(" %49s", nome_cidade_2);
    printf("\nDigite a populacao da cidade:\n");
    scanf(" %d", &populacao_2);
    printf("\nDigite a area da cidade:\n");
    scanf(" %f", &area_2);
    printf("\nDigite o PIB da cidade:\n");
    scanf(" %f", &pib_2);
    printf("\nDigite a quantidade de pontos turisticos:\n");
    scanf(" %d", &qtd_pontos_turisticos_2);


}

// Função principal do programa que chama coleta e exibição dos dados.
int main()
{
  coletarDados();
  exibirTrunfo();
    return 0;
}