#include <stdio.h>

int main(){

    /*Desafio do nivel Mestre
    Aluno: Erik Holanda
    Curso: Ciência da Computação
    08/06/2025 - 17:00 am*/

    //criando as variaveis
    char est1[20], est2[20], cod1[20], cod2[20],cid1[20], cid2[20];
    int tur1, tur2;
    int pop1, pop2;
    float are1, are2, pib1, pib2, denspop1, pibper1, denspop2, pibper2, superPoder1, superPoder2;

    //coletando os dados da carta 01
    printf("--Informe os dados da Carta 01--\n");
    printf("Digite o Estado: \n");
    scanf("%s", &est1);
    printf("Digite o Codigo: \n");
    scanf("%s", &cod1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cid1);
    printf("Digite a Populacao: \n");
    scanf("%d", &pop1);
    printf("Digite a Area: \n");
    scanf("%f", &are1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite os Pontos Turísticos: \n");
    scanf("%d", &tur1);

    //calculando a densidade populacional e o pib per capita da carta 01
    denspop1 = (float) pop1/are1;
    pibper1 = (float) pib1/pop1;

    //coletando os dados da carta 02
    printf("--Informe os dados da Carta 02--\n");
    printf("Digite o Estado: \n");
    scanf("%s", &est2);
    printf("Digite o Codigo: \n");
    scanf("%s", &cod2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cid2);
    printf("Digite a Populacao: \n");
    scanf("%d", &pop2);
    printf("Digite a Area: \n");
    scanf("%f", &are2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite os Pontos Turísticos: \n");
    scanf("%d", &tur2);

     //calculando a densidade populacional e o pib per capita da carta 02
    denspop2 = (float) pop2/are2;
    pibper2 = (float) pib2/pop2;

    //calculando o super poder das cartas 01 e 02
    superPoder1 = (float) (pop1+are1+pib1+tur1+pibper1)+(1/denspop1);
    superPoder2 = (float) (pop2+are2+pib2+tur2+pibper2)+(1/denspop2);

    //mostrando os dados da carta 01
    printf("Carta 1:\n");
    printf("Estado: %s\n", est1);
    printf("Codigo: %s\n", cod1);
    printf("Nome: %s\n", cid1);
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2fkm²\n", are1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", tur1);
    printf("Densidade populacional: %.2f\n", denspop1);
    printf("PIB Per Capita: %.2f\n", pibper1);
    printf("Super Poder: %.2f\n", superPoder1);

    //mostrando os dados da carta 02
    printf("Carta 2:\n");
    printf("Estado: %s\n", est2);
    printf("Codigo: %s\n", cod2);
    printf("Nome: %s\n", cid2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2fkm²\n", are2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", tur2);
    printf("Densidade populacional: %.2f\n", denspop2);
    printf("PIB Per Capita: %.2f\n", pibper2);
    printf("Super Poder: %.2f\n", superPoder2);

    //compração das cartas

    printf("Comparação das Cartas (1= Carta 01 ganha // 0= Carta 02 ganha)\n");
    printf("População: %d\n", pop1>pop2);
    printf("Área: %d\n", are1>are2);
    printf("PIB: %d\n", pib1>pib2);
    printf("Pontos Turísticos: %d\n", tur1>tur2);
    printf("Densidade Populacional: %d\n", denspop1<denspop2);
    printf("PIB Per Capita: %d\n", pibper1>pibper2);
    printf("Super Poder: %d\n", superPoder1>superPoder2);

    return 0;
}