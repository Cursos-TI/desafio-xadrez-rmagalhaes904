#include <stdio.h>

int main(){
    //Declarando variaveis das peças de xadrez
    int torre = 0;
    int bispo = 0;
    int rainha;
    int cavalo_esquerda;
    int cavalo_baixo;


    //Iniciando a logica de movimentação da Torre
    printf("\n========= Movimentação da torre =========\n");
    while (torre < 5){
        //Exibindo o movimento da torre
        printf("Direita\n");
        //Adicionando incremento na variavel torre
        torre ++;
    }


    //Iniciando a logica de movimentação do Bispo
    printf("\n========= Movimentação do bispo =========\n");
    do{
        //Exibindo o movimento do bispo
        printf("Cima, Direita\n");
        //Adicionando incremento na variavel bispo
        bispo ++;
    } while (bispo < 5);


    //Iniciando a logica de movimentação da Rainha
    printf("\n========= Movimentação da rainha =========\n");
    for ( rainha = 0; rainha < 8; rainha++){
        //Exibindo o movimento da rainha
        printf("Esquerda\n");
    }
    
    //Iniciando a logica de movimentação do Cavalo
    printf("\n========= Movimentação do cavalo =========\n");
     
    //Movimento do cavalo: duas casas para baixo e uma para a esquerda
    for (cavalo_baixo = 0; cavalo_baixo < 2; cavalo_baixo++){

        printf("Baixo\n");
        cavalo_esquerda = 0;
        while (cavalo_esquerda < 1 && cavalo_baixo == 1){
            printf("Esquerda\n");
            cavalo_esquerda++;
        }

    }


    return 0;
}