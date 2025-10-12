#include <stdio.h>

// Variaveis globais para armazenar os dados das cartas e exibição.
char estado_1[2];
char estado_2[2];
char codigo_1[3];
char codigo_2[3];
char nome_cidade_1[50]; 
char nome_cidade_2[50];
unsigned long int populacao_1, populacao_2;
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

// Função para calcular o Super poder.
float calcularSuperPoder(int populacao, float area, float pib, int qtd_pontos, float pib_per_capita, float densidade) {
return (populacao + area + pib + qtd_pontos + pib_per_capita - densidade);

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
    printf("Super poder: %.2f\n", calcularSuperPoder(populacao_1, area_1, pib_1, qtd_pontos_turisticos_1, calcularPibPerCapita(pib_1, populacao_1), calcularDensidade(populacao_1, area_1)));


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
    printf("Super poder: %.2f\n", calcularSuperPoder(populacao_2, area_2, pib_2, qtd_pontos_turisticos_2, calcularPibPerCapita(pib_2, populacao_2), calcularDensidade(populacao_2, area_2)));

}

//  Função para comparar os atributos das cartas.
void exibirComparacaoDeAtributos(){
    printf ("Comparação das cartas:\n");
    printf ("População: Carta 1 venceu(%d)\n", populacao_1 > populacao_2);   
    printf ("Área: Carta 1 venceu(%d)\n",area_1 > area_2);
    printf ("PIB: Carta 1 venceu(%d)\n",pib_1 > pib_2);
    printf ("Pontos Turisticos: Carta 1 venceu(%d)\n",qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2);
    printf ("Densidade Populacional: Carta 1 venceu(%d)\n",calcularDensidade(populacao_1, area_1) < calcularDensidade(populacao_2, area_2));
    printf ("PIB per capita: Carta 1 venceu(%d)\n",calcularPibPerCapita(pib_1, populacao_1) > calcularPibPerCapita(pib_2, populacao_2));
    printf ("Super Poder: Carta 1 venceu(%d)\n",calcularSuperPoder(populacao_1, area_1, pib_1, qtd_pontos_turisticos_1, calcularPibPerCapita(pib_1, populacao_1), calcularDensidade(populacao_1, area_1)) > calcularSuperPoder(populacao_2, area_2, pib_2, qtd_pontos_turisticos_2, calcularPibPerCapita(pib_2, populacao_2), calcularDensidade(populacao_2, area_2)));
}
void coletarDados()
{
// Função para coletar os dados das cartas.
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
// Função para gerar o menu interativo.
int gerarMenuInterativo() {
    int opcao;
    printf("Atributo das cartas Super Trunfo. \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turisticos \n");
    printf("5 - Densidade Populacional \n");
    printf("6 - Verificar as regras do jogo \n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;

}
// Função para comparar os atributos escolhidos pelo usuário.
void compararAtributosEscolhidos(int opcao) {
    switch (opcao) {
        case 1:
        printf ("Você escolheu comparar o atributo População:\n");
        printf ("Carta 1 - %s,%d\n", nome_cidade_1, populacao_1);
        printf ("Carta 2 - %s,%d\n", nome_cidade_2, populacao_2);
        if (populacao_1 > populacao_2) {
            printf("Carta 1 venceu!\n");
        } else if (populacao_1 < populacao_2) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 2:
        printf ("Você escolheu comparar o atributo Área:\n");
        printf ("Carta 1 - %s,%f\n", nome_cidade_1, area_1);
        printf ("Carta 2 - %s,%f\n", nome_cidade_2, area_2);
        if (area_1 > area_2) {
            printf("Carta 1 venceu!\n");
        } else if (area_1 < area_2) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 3:
        printf ("Você escolheu comparar o atributo PIB:\n");
        printf ("Carta 1 - %s,%f\n", nome_cidade_1, pib_1);
        printf ("Carta 2 - %s,%f\n", nome_cidade_2, pib_2);
        if (pib_1 > pib_2) {
            printf("Carta 1 venceu!\n");
        } else if (pib_1 < pib_2) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 4:
        printf ("Você escolheu comparar o atributo Pontos Turisticos:\n");
        printf ("Carta 1 - %s,%d\n", nome_cidade_1, qtd_pontos_turisticos_1);
        printf ("Carta 2 - %s,%d\n", nome_cidade_2, qtd_pontos_turisticos_2);
        if (qtd_pontos_turisticos_1 > qtd_pontos_turisticos_2) {
            printf("Carta 1 venceu!\n");
        } else if (qtd_pontos_turisticos_1 < qtd_pontos_turisticos_2) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 5:
        printf ("Você escolheu comparar o atributo Densidade Populacional:\n");
        printf ("Carta 1 - %s,%.2f\n", nome_cidade_1, calcularDensidade(populacao_1, area_1));
        printf ("Carta 2 - %s,%.2f\n", nome_cidade_2, calcularDensidade(populacao_2, area_2));
        if (calcularDensidade(populacao_1, area_1) < calcularDensidade(populacao_2, area_2)) {
            printf("Carta 1 venceu!\n");
        } else if (calcularDensidade(populacao_1, area_1) > calcularDensidade(populacao_2, area_2)) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 6:
        printf ("Regras do jogo Super Trunfo:\n");
        printf ("1 - Cada carta representa uma cidade com atributos específicos.\n");
        printf ("2 - Os jogadores escolhem um atributo para comparar entre as cartas.\n");
        printf ("3 - A carta com o maior valor no atributo escolhido vence, exceto no caso de Densidade Populacional, a regra inverte: vence a carta com menor valor.\n");  
        printf ("4 - Em caso de empate, nenhuma carta vence.\n");
        gerenciarJogo();
        break;
        default:
        printf ("Opção inválida!\n");
        break;

    }
}
// Função para comparar atributos das cartas.
void compararAtributos() {

    printf("Comparação de cartas:(Atributo: Área):\n");
    printf ("Carta 1 - %s, %s, %f\n", estado_1, nome_cidade_1, area_1);
    printf ("Carta 2 - %s, %s, %f\n", estado_2, nome_cidade_2, area_2);

// Comparação do atributo área, utilizando if, else if e else.
    if (area_1 > area_2) {
        printf("Carta 1 venceu!\n");
    } else if (area_1 < area_2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
}
void gerenciarJogo() {
    int opcao = gerarMenuInterativo();
    compararAtributosEscolhidos(opcao);
}

// Função principal do programa que chama coleta e exibição dos dados.
int main()
{
coletarDados();
exibirTrunfo();
gerenciarJogo();
  return 0;
}