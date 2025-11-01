#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
/* supertrunfo - os usuários tem que cadastrar 2 cartas, com as seguintes informações: Estado: Uma letra de 'A' a 'H', em char; Código da Carta: letra do estado + número de 01 a 04, char[]
  Nome da Cidade: nome, em char[]; População: número de habitantes, em int; Área: A área da cidade em km2, em float; PIB, em float; Pontos Turísticos: qtde, em int
  No nivel aventureiro: sistema calcula a Densidade Populacional e o PIB per Capita com base nos dados inseridos.
*/

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char nomecid[20];
int pontostur, codcarta, populacao;
float areakm, pib, densid, percapita;

  // Área para entrada de dados
printf("Bem vindo ao Super Trunfo!\n");
printf("Antes de começar a jogar, vamos cadastrar suas cartas. \n");
  
    printf("Dê um nome à sua cidade - por favor, não use espaços: \n");
    scanf("%s", &nomecid);
    
    printf("Em qual Estado a %s fica localizada? Escolha uma letra de A a H: \n", nomecid);
    scanf(" %c", &estado);

    printf("A %s será sua cidade 01 ou 02? \n", nomecid);
    scanf("%d", &codcarta);

    printf("A %s é sua carta %c0%d \n", nomecid, estado, codcarta);

    printf("Qual será a população da %s? - por favor, não use sinais de pontuação: \n", nomecid);
    scanf("%d", &populacao);

    printf("Agora, qual será a área da cidade (em km²)? \n");
    scanf("%f", &areakm);

    printf("E, quantos pontos turísticos a %s tem? \n", nomecid);
    scanf("%d", &pontostur);

    printf("Ótimo! Só falta definir o PIB! Qual o Produto Interno Bruto (em milhões de reais)? - por favor, não use sinais de pontuação: \n");
    scanf("%f", &pib);

  // Área para processamento de dados
    densid = populacao/areakm;
    percapita = pib/populacao;    

  // Área para exibição dos dados da cidade
  printf("Sua primeira carta foi cadastrada com sucesso! Confira abaixo as informações da %s: \n", nomecid);
      printf("CARTA 1;");
      printf(" Código da Carta: %c0%d \n", estado, codcarta);
      printf("Estado: %c \n", estado);
      printf("Nome da Cidade: %s \n", nomecid);
      printf("Área: %.2f km² \n", areakm);
      printf("População: %d \n", populacao);
      printf("A densidade populacional é de %.2f habitantes/km² \n", densid);
      printf("PIB: %.2f milhões de reais \n", pib);
      printf("O PIB per capita da %s é = R$ %.2f/habitante \n", nomecid, percapita);
      printf("Número de Pontos Turísticos: %d \n", pontostur);

printf("\n Pronto para criar sua segunda carta?\n");

  // Área para entrada de dados da carta2
/* repetição da carta 1, mas alterando as "caixas" de informação para '2'*/

char estado2;
char nomecid2[20];
int pontostur2, codcarta2, populacao2, atributo;
float areakm2, pib2, densid2, percapita2;
  
    printf("Qual nome da segunda cidade? - por favor, não use espaços: \n");
    scanf("%s", &nomecid2);
    
    printf("Em qual Estado a %s fica localizada? Escolha uma letra de A a H: \n", nomecid2);
    scanf(" %c", &estado2);

    printf("A %s será sua cidade 03 ou 04? \n", nomecid2);
    scanf("%d", &codcarta2);

    printf("A %s é sua carta %c0%d \n", nomecid2, estado2, codcarta2);

    printf("Qual será a população da %s? - por favor, não use sinais de pontuação: \n", nomecid2);
    scanf("%d", &populacao2);

    printf("Qual a área da cidade, em km²? - por favor, não use sinais de pontuação: \n");
    scanf("%f", &areakm2);

    printf("Quantos pontos turísticos a %s tem? \n", nomecid2);
    scanf("%d", &pontostur2);

    printf("Qual o Produto Interno Bruto (em milhões de reais)?- por favor, não use sinais de pontuação: \n");
    scanf("%f", &pib2);

    // Área para processamento de dados
   
    densid2 = populacao2/areakm2;
    percapita2 = pib2/populacao2; 

    // Área para exibição dos dados da cidade

  printf("A segunda carta foi cadastrada com sucesso! Confira abaixo as informações da %s: \n", nomecid2);
      printf("CARTA 2;");
      printf("Código da Carta: %c0%d \n", estado2, codcarta2);
      printf("Estado: %c \n", estado2);
      printf("Nome da Cidade: %s \n", nomecid2);
      printf("População: %d \n", populacao2);
      printf("Área: %.2f km² \n", areakm2);
      printf("A densidade populacional é de %.2f habitantes/ km² \n", densid2);
      printf("PIB: %.2f milhões de reais \n", pib2);
      printf("O PIB per capita é = R$ %.2f/habitante \n", percapita2);
      printf("Número de Pontos Turísticos: %d \n", pontostur2);

printf("Tudo pronto para você começar a jogar!\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Número de pontos turísticos\n");
printf("5 - Densidade demográfica\n");
printf("Escolha pelo número qual atributo das cartas vão competir: \n");
scanf("%d", &atributo);

switch(atributo){
    case 1:
        if(populacao>populacao2){
            printf("Batalha entre as cartas. A carta %c vence!\n", nomecid);
            printf("População da carta %s: %d habitantes\n", nomecid, populacao);
            printf("População da carta %s: %d habitantes\n", nomecid2,populacao2);
        } else {
            printf("Batalha entre as cartas. A carta %c vence!\n", nomecid2);
        }
    break;
    case 2:
        if(pib>pib2){
            printf("Batalha entre as cartas. A carta %c vence!\n", nomecid);
           printf("PIB da carta %s: R$ %.2f \n", nomecid, pib);
            printf("PIB da carta %s: R$ %.2f \n", nomecid2,pib2); 
        } else {
            printf("Batalha entre as cartas. A carta %c vence!\n", nomecid2);
        }
    break;
    case 3:
        if(areakm>areakm2){
            printf("Batalha entre as cartas. A carta %c vence!\n", nomecid);
            printf("Area KM da carta %s: %.2f km²\n", nomecid, areakm);
            printf("Area KM da carta %s: %.2f km²\n", nomecid2, areakm2);
        } else {
            printf("Batalha entre as cartas. A carta %c vence!\n", nomecid2);
        }
    break;
    case 4:
        if(pontostur>pontostur2){
            printf("Batalha entre as cartas. A carta %c vence!\n", nomecid);
            printf("Número de pontos turísticos da carta %s: %d pontos\n", nomecid, pontostur);
            printf("Número de pontos turísticos da carta %s: %d pontos\n", nomecid2,pontostur2);
        } else {
            printf("Batalha entre as cartas. A carta %c vence!\n", nomecid2);
        }
    break;
    case 5:
        if (densid<densid2){
        printf("Batalha entre as cartas. A carta %c vence!\n", nomecid);
        } else {
        printf("Batalha entre as cartas. A carta %c vence!\n", nomecid2);
        printf("Carta %c0%d - Densidade populacional: %.2f habitantes/km²\n", estado, codcarta, densid);
        printf("Carta %c0%d - Densidade populacional: %.2f habitantes/km²\n", estado2, codcarta2, densid2);
        }
    break;
    
    default:
    printf("Atributo inválido. Digite novamente.\n");
    }

printf("Obrigada por jogar");

return 0;
}
