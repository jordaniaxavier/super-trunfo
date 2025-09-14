#include <stdio.h>

char estado_1, estado_2;
char codigo_1[3], codigo_2[3];
char nome_cidade_1[50], nome_cidade_2[50];
int populacao_1, populacao_2;
float area_1, area_2;
float pib_1, pib_2;
int qtd_pontos_turisticos_1, qtd_pontos_turisticos_2;

void exibirTrunfo()
{
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %c%s\n", estado_1, codigo_1);
    printf("Nome da cidade: %s\n", nome_cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f Km²\n", area_1);
    printf("PIB: %.2f Bilhões\n", pib_1);
    printf("Quantidade de pontos turisticos: %d\n", qtd_pontos_turisticos_1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %c%s\n", estado_2, codigo_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f Km²\n", area_2);
    printf("PIB: %.2f Bilhões\n", pib_2);
    printf("Quantidade de pontos turisticos: %d\n", qtd_pontos_turisticos_2);

}

void coletarDados()
{

    printf("Bem-vindo ao jogo de cartas Super Trunfo\n");
    printf(" Vamos preencher os dados da carta 1\n");
    printf("Digite um estado de A a H: ");
    scanf(" %c", &estado_1);
    printf("\nDigite o codigo da carta (de 01 a 04): ");
    scanf(" %s", codigo_1);
    printf("\nDigite o nome da cidade: ");
    scanf(" %s", nome_cidade_1);    
    printf("\nDigite a populacao da cidade: ");
    scanf(" %d", &populacao_1);
    printf("\nDigite a area da cidade: ");
    scanf(" %f", &area_1);
    printf("\nDigite o PIB da cidade: ");
    scanf(" %f", &pib_1);
    printf("\nDigite a quantidade de pontos turisticos: ");
    scanf(" %d", &qtd_pontos_turisticos_1);

    printf("\nAgora vamos preencher os dados da carta 2\n");
    printf("Digite um estado de A a H: ");  
    scanf(" %c", &estado_2);
    printf("\nDigite o codigo da carta (de 01 a 04): ");
    scanf(" %s", codigo_2);
    printf("\nDigite o nome da cidade: ");
    scanf(" %s", nome_cidade_2);
    printf("\nDigite a populacao da cidade: ");
    scanf(" %d", &populacao_2);
    printf("\nDigite a area da cidade: ");
    scanf(" %f", &area_2);
    printf("\nDigite o PIB da cidade: ");
    scanf(" %f", &pib_2);
    printf("\nDigite a quantidade de pontos turisticos: ");
    scanf(" %d", &qtd_pontos_turisticos_2);


}
int main()
{
  coletarDados();
  exibirTrunfo();
    return 0;
}