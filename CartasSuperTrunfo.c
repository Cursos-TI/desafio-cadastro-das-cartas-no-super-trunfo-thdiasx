#include <stdio.h>

int main() {

    //declaração das variaveis 

    int PontoTuristico1,PontoTuristico2,Populaçao1, Populacao2;
    float PIB1,PIB2,Area1,Area2;
    char Estado1,Estado2;
    char Cidade1[10],Cidade2[10],Codigo1[10],Codigo2[10] ;

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

    // Printando a primeira carta na tela

    printf("CARTA 1:\n");
    printf("Estado: %c \n", Estado1);
    printf("Codigo: %s \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populaçao1);
    printf("Area: %f \n",Area1);
    printf("PIB: %f \n",PIB1);
    printf("Pontos Turisticos: %d \n",PontoTuristico1);
    printf("\n");

    // Printando a segunda carta na tela

    printf("CARTA 2:\n");
    printf("Estado: %c \n", Estado2);
    printf("Codigo: %s \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Area: %f \n", Area2);
    printf("PIB: %f \n", PIB2);
    printf("Pontos Turisticos: %d \n", PontoTuristico2);

    return 0;
}
