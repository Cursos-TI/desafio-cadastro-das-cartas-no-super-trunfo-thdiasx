#include <stdio.h>

int main() {

    //declaração das variaveis 

    int PontoTuristico1,PontoTuristico2;
    unsigned long int Populaçao1, Populacao2;
    float PIB1,PIB2,Area1,Area2;
    float DensidadePopulacional1,DensidadePopulacional2;
    float PIBpc1,PIBpc2;
    char Estado1,Estado2;
    char Cidade1[20],Cidade2[20],Codigo1[10],Codigo2[10] ;
    int SuperPoder1,SuperPoder2;
    int Rpib,Rarea,Rpopulacao,Rdensidade,Rpibpc,Rsuperpoder,Rpontoturistico;

    // inserindo os dados para registrar as duas cartas

    printf("Insira o Estado da primeira e da segunda carta respectivamente (Uma letra de 'A' a 'H'): \n");
    scanf("%c %c", &Estado1,&Estado2);

    printf("Insira o codigo da primeira e da segunda carta respectivamente (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): \n");
    scanf("%s %s", Codigo1,Codigo2);

    printf("Insira o nome da primeira e da segunda Cidade respectivamente:\n");
    scanf("%s %s", Cidade1, Cidade2);

    printf("Insira o numero de habitantes da primeira e da segunda cidade respectivamente:\n");
    scanf("%d %d", &Populaçao1,& Populacao2);

    printf("insira a area da primeira e da segunda cidade em quilometros quadrados respectivamente:\n");
    scanf("%f %f", &Area1, &Area2);

    printf("Insira o produto interno bruto da primeira e segunda cidade (PIB) respectivamente:\n");
    scanf("%f %f", &PIB1, &PIB2);

    printf("Insira a quantidade de pontos turisticos na primeira e na segunda cidade respectivamente:\n");
    scanf("%d %d", &PontoTuristico1, &PontoTuristico2);
    printf("\n");

    //Declarando os valores de Densidade Populacional e PIB per capita

    DensidadePopulacional1 = (float) Populaçao1 / Area1; 
    DensidadePopulacional2 = (float) Populacao2 / Area2;
    PIBpc1 = (float) (PIB1 * 1000000000.0) / Populaçao1;
    PIBpc2 = (float) (PIB2 * 1000000000.0) / Populacao2;

    //Calculando o super poder

    SuperPoder1 = Area1 + PIB1 + (double)PontoTuristico1 + (double)Populaçao1 + PIBpc1 + DensidadePopulacional1;
    SuperPoder2 = Area2 + PIB2 + (double)PontoTuristico2 + (double)Populacao2 + PIBpc2 + DensidadePopulacional2;
    
    // Printando a primeira carta na tela

    printf("CARTA 1:\n");
    printf("Estado: %c \n", Estado1);
    printf("Codigo: %s \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populaçao1);
    printf("Area: %.2f km² \n",Area1);
    printf("PIB: %.2f bilhoes de reais \n",PIB1);
    printf("Pontos Turisticos: %d \n",PontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km² \n",DensidadePopulacional1);
    printf("PIB per capita: %.2f reais \n",PIBpc1);
    printf("\n");

    // Printando a segunda carta na tela

    printf("CARTA 2:\n");
    printf("Estado: %c \n", Estado2);
    printf("Codigo: %s \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Area: %.2f km² \n", Area2);
    printf("PIB: %.2f bilhoes de reais \n", PIB2);
    printf("Pontos Turisticos: %d \n", PontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km² \n",DensidadePopulacional2);
    printf("PIB per capita: %.2f reais \n",PIBpc2);
    printf("\n");


    //comparacao das cartas

    Rpib = PIB1 > PIB2;
    Rpibpc = PIBpc1 > PIBpc2;
    Rdensidade = DensidadePopulacional1 > DensidadePopulacional2;
    Rpopulacao = Populaçao1 > Populacao2;
    Rsuperpoder = SuperPoder1 > SuperPoder2;
    Rarea = Area1 > Area2;
    Rpontoturistico = PontoTuristico1 > PontoTuristico2;

    printf("******* COMPARACAO DAS CARTAS *******\n");
    printf("Populacao: %d\n",Rpopulacao);
    printf("Area: %.2f\n",Rarea);
    printf("PIB: %.2f\n",Rpib);
    printf("Pontos Turisticos: %d\n",Rpontoturistico);
    printf("Densididade Populacional: %.2f\n",Rdensidade); 
    printf("PIB per capita: %.2f\n", Rpibpc);
    printf("SuperPoder: %d\n",Rsuperpoder);  

    return 0;
}
