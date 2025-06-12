#include <stdio.h>

int main(){

    /*Desafio do nivel Mestre
    Aluno: Erik Holanda
    Curso: Ciência da Computação
    08/06/2025 - 17:00 am*/

    //criando as variaveis
    char est1[20], est2[20], cod1[20], cod2[20],cid1[20], cid2[20];
    int tur1, tur2, opcaoMenu;
    int pop1, pop2;
    float are1, are2, pib1, pib2, denspop1, pibper1, denspop2, pibper2, superPoder1, superPoder2;

    //coletando os dados da carta 01
    printf("JOGO SUPER TRUNFO - CARTAS DE CIDADES\n");
    printf("------Informe os dados da Carta 01-------\n");
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

    printf("----------------------------------------\n");

    //calculando a densidade populacional e o pib per capita da carta 01
    denspop1 = (float) pop1/are1;
    pibper1 = (float) pib1/pop1;

    //coletando os dados da carta 02
    printf("------Informe os dados da Carta 02------\n");
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

    printf("----------------------------------------\n");

     //calculando a densidade populacional e o pib per capita da carta 02
    denspop2 = (float) pop2/are2;
    pibper2 = (float) pib2/pop2;

    //calculando o super poder das cartas 01 e 02
    superPoder1 = (float) (pop1+are1+pib1+tur1+pibper1)+(1/denspop1);
    superPoder2 = (float) (pop2+are2+pib2+tur2+pibper2)+(1/denspop2);

    //mostrando os dados da carta 01
    printf("------DADOS CADASTRADOS DAS CARTAS------\n");
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

    printf("---------------------------------------\n");

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

    printf("---------------------------------------\n");
    printf("--QUAL ATRIBUTO VOCÊ DESEJA COMPARAR?--\n");
    printf("1: POPULAÇÃO\n");
    printf("2: ÁREA\n");
    printf("3: PIB\n");
    printf("4: PONTOS TURÍSTICOS\n");
    printf("5: DENSIDADE POPULACIONAL\n");
    printf("6: PIB PER CAPITA\n");
    printf("7: SUPER PODER\n");
    printf("ESCOLHA UMA OPÇÃO (1 A 7): ");
    scanf("%d", &opcaoMenu);
    printf("\n"); // pular linha


    //compração das cartas
    printf("---------COMPARAÇÃO DAS CARTAS---------\n");

    switch (opcaoMenu)
    {
    case 1: // populacao
        printf("Carta 01: %s - Valor: %d\n",cid1, pop1);
        printf("Carta 02: %s - Valor: %d\n",cid2, pop2);    

        if (pop1>pop2)
        {
            printf("População: %s Venceu!\n", cid1);
        }else if (pop1<pop2)
        {
            printf("População: %s Venceu!\n", cid2);
        }else{
            printf("População: Empatou\n");
        }
        break;
    case 2: //area
        printf("Carta 01: %s - Valor: %.2f\n",cid1, are1);
        printf("Carta 02: %s - Valor: %.2f\n",cid2, are2);

        if (are1>are2)
        {
            printf("Área: %s Venceu!\n", cid1);
        }else if(are1<are2){
            printf("Área: %s Venceu!\n", cid2);
        }else{
            printf("Área: Empatou\n");
        }
        break;
    case 3: //pib
        printf("Carta 01: %s - Valor: %.2f\n",cid1, pib1);
        printf("Carta 02: %s - Valor: %.2f\n",cid2, pib2);

        if (pib1>pib2)
        {
            printf("PIB: %s Venceu!\n", cid1);
        }else if(pib1<pib2){
            printf("PIB: %s Venceu!\n", cid2);
        }else{
            printf("PIB: Empatou\n");
        }
        break;
    case 4: // pontos turisticos
        printf("Carta 01: %s - Valor: %d\n",cid1, tur1);
        printf("Carta 02: %s - Valor: %d\n",cid2, tur2);

        if (tur1>tur2)
        {
            printf("Pontos Turísticos: %s Venceu!\n", cid1);
        }else if(tur1<tur2){
            printf("Pontos Turísticos: %s Venceu!\n", cid2);
        }else{
            printf("Pontos Turísticos: Empatou\n");
        }
        break;
    case 5: //densidade populacional
        printf("Carta 01: %s - Valor: %.2f\n",cid1, denspop1);
        printf("Carta 02: %s - Valor: %.2f\n",cid2, denspop2);

        if (denspop1>denspop2)
        {
            printf("Densidade Populacional: %s Venceu!\n", cid2);
        }else if(denspop1<denspop2){
            printf("Densidade Populacional: %s Venceu!\n", cid1);
        }else{
            printf("Densidade Populacional: Empatou\n");
        }
        break;
    case 6: //pib per capita
        printf("Carta 01: %s - Valor: %.2f\n",cid1, pibper1);
        printf("Carta 02: %s - Valor: %.2f\n",cid2, pibper2);

        if (pibper1>pibper2)
        {
            printf("PIB Per Capita: %s Venceu!\n", cid1);
        }else if(pibper1<pibper2){
            printf("PIB Per Capita: %s Venceu!\n", cid2); 
        }else{
            printf("Pib Per Capita: Empatou\n");
        }
        break;
    case 7: //super poder
        printf("Carta 01: %s - Valor: %.2f\n",cid1, superPoder1);
        printf("Carta 02: %s - Valor: %.2f\n",cid2, superPoder2);

        if (superPoder1>superPoder2)
        {
            printf("Super Poder: %s Venceu!\n", cid1);
        }else if (superPoder1<superPoder2)
        {
            printf("Super Poder: %s Venceu!\n", cid2);
        }else{
            printf("Super Poder: Empatou\n");
        }
        break;
    
    default:
        printf("VOCÊ NÃO ESCOLHEU UMA OPÇÃO VÁLIDA\n");
        break;
    }

    return 0;
}