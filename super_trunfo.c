#include <stdio.h>

int main(){
    printf("DESAFIO SUPER TRUNFO - PAÍSES \n");//CADASTRO DO TEMA DO JOGO
    //CADASTRAR DADOS CARTA 1

    printf("CARTA 1\n");

    char ESTADO [] = "ESTADO A,B,C,D,E,F,G,H";
    char CIDADE[20];
    char CODIGO[] = "A,B,C,D,E,F,G,H, 1,2,3,4"; 
    int POPULACAO;
    float AREAKM;
    float PIB;
    int NUMEROPONTOSTURISTICOS;

    // USUARIO CADASTRA OS DADOS DA CARTA 1
    printf("\n ESTADO:  ");//USUARIO CADASTRA A LETRA DO ESTADO DO PAÍS ESCOLHIDO.
    scanf(" %c",ESTADO);

    //USUARIO CADASTRA NOME DA CIDADE DO PAÍS ESCOLHIDO
    printf("\n CIDADE:  ");
    scanf(" 19%s",CIDADE);

    //USUARIO CADASTRA O CÓDIGO DA CARTA 1
    printf("\n CÓDIGO DA CARTA: ");
    scanf("%c %d",CODIGO);

    
}