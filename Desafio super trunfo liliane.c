#include<stdio.h>
//Tema do desafio
int main(){
    printf("DESAFIO SUPER TRUNFO: PAÍSES\n");

    // começando o cadastro das cartas
    char codigo_letra1, codigo_letra2,estado1, estado2;
    int codigo_numero1, codigo_numero2, cidade1, cidade2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    // cadastro da carta 1
    printf("CADASTRO DA CARTA 1\n");
    printf("CÓDIGO DA CARTA 1- LETRA(A-H): ");
    scanf(" %c", &codigo_letra1);
    printf("CÓDIGO DA CARTA 1- NÚMERO(1-4): ");
    scanf(" %d", &codigo_numero1);
    printf("ESTADO(A-H): ");
    scanf(" %c", &estado1);
    printf("CIDADE(1-4): ");
    scanf(" %d", &cidade1);
    printf("POPULAÇÃO: ");
    scanf(" %d", &populacao1);
    printf("ÁREA(EM KM²): ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf(" %d", &pontos_turisticos1);
    printf("\n");

    // CADASTRO DA CARTA 2
    printf("CADASTRO DA CARTA 2\n");
    printf("CÓDIGO DA CARTA 2-LETRA(A-H): ");
    scanf(" %c", &codigo_letra2);
    printf("CÓDIGO DA CARTA 2- NÚMERO(1-4): ");
    scanf(" %d", &codigo_numero2);
    printf("ESTADO(A-H): ");
    scanf(" %c", &estado2);
    printf("CIDADE(1-4): ");
    scanf(" %d", &cidade2);
    printf("POPULAÇÃO: ");
    scanf(" %d", &populacao2);
    printf("ÁREA(EM KM²): ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf(" %d", &pontos_turisticos2);
    printf("\n");

    // EXIBIR AS CARTAS CADASTRADAS
    printf("CARTAS CADASTRADAS:\n");
    printf("CARTA 1\n");
    printf("CÓDIGO: %c%d\n",codigo_letra1, codigo_numero1);
    printf("ESTADO: %c\n", estado1);
    printf("CIDADE: %d\n", cidade1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos1);
    printf("CARTA 1 CADASTRADA COM SUCESSO!\n");
    printf("---------------------------------------------------------------\n");
    printf("CARTA 2 \n");
    printf("CÓDIGO: %c%d\n", codigo_letra2, codigo_numero2);
    printf("ESTADO: %c\n",estado2);
    printf("CIDADE: %d\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2f\n",pib2);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos2);
    printf("CARTA 2 CADASTRADA COM SUCESSO!\n");
    printf("-----------------------------------------------------------------\n");


    return 0;
}


 
    

   
   


    

