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
    


    return 0;
}