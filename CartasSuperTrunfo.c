#include <stdio.h>

int main() {

    //declaração das variaveis 

    int PontoTuristico1,PontoTuristico2;
    unsigned long int Populaçao1, Populacao2;
    float PIB1,PIB2,Area1,Area2;
    float DensidadePopulacional1,DensidadePopulacional2;
    float PIBpc1,PIBpc2;
    char Estado1,Estado2;
    char Cidade1[30],Cidade2[30],Codigo1[10],Codigo2[10] ;
    int SuperPoder1,SuperPoder2;
    int decisao;

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

    //Calculando o superpoder

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

    printf("***** DESAFIO DAS CARTAS *****");
    printf("Escolha um numero que represente o desafio que voce quer:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("ESCOLHA O NUMERO QUE VOCE QUER DESAFIAR!\n");
    scanf("%d", &decisao);

    switch (decisao)
    {
    case 1:
        if (Populaçao1 > Populacao2)
        {
            printf("A carta 1 ganhou em populacao!\n");
        }else{
            printf("A carta 2 ganhou em populacao!\n");
        }   
        break;

    case 2:

        if (Area1 > Area2)
        {
            printf("A carta 1 ganhou em area!\n");
        }else{
            printf("A carta 2 ganhou em area!\n");
        }
        break;

    case 3:
        if (PIB1 > PIB2)
        {
            printf("A carta 1 ganhou em PIB!\n");
        }else{
            printf("A carta 2 ganhou em PIB!\n");
        }
        break;   

    case 4:
        if (PontoTuristico1 > PontoTuristico2)
        {
            printf("A carta 1 ganhou em Pontos Turisticos\n");
        }else{
            printf("A carta 2 ganhou em Pontos turisticos\n");
        }
        break;
        
    case 5:
        if (DensidadePopulacional1 < DensidadePopulacional2)
        {
            printf("A carta 1 ganhou em Densidade Populacional!\n");
        }else{
            printf("A carta 2 ganhou em Densidae Poulacional!\n");
        }
        break;

    case 6:
        if (PIBpc1 > PIBpc2)
        {
            printf("A carta 1 ganhou em PIB per capita!\n");
        }else{
            printf("A carta 2 ganhou em PIB per capita!\n");
        }
        break;    
    
    default:
        printf("ESSA OPCAO NAO ESTA DISPONIVEL!\n");
        break;
    }
    
    return 0;
}
