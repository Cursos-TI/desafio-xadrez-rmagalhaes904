#include <stdio.h>

//Função para movimentação da Torre
void moverTorre(int movimento, int limite){
    //Verificando se atingiu o limite de movimentos
    if(movimento >= limite)
        return;

    //Exibindo o movimento da torre
    printf("Direita\n");

    //Chamando a função recursivamente e adicionando incremento no movimento
    moverTorre(movimento + 1, limite);
}

//Função para movimentação do Bispo
void moverBispo(int movimento, int limite){
    //Verificando se atingiu o limite de movimentos
    if(movimento >= limite)
        return;

    int vertical, horizontal;

    //Loop para definir a movimentação vertical do bispo
    for(vertical = 0; vertical < 1; vertical++){
        //Loop para definir a movimentação horizontal do bispo
        for(horizontal = 0; horizontal < 1; horizontal++){
            //Exibindo o movimento do bispo
            printf("Cima, Direita\n");
        }
    }

    //Chamando a função recursivamente e adicionando incremento no movimento
    moverBispo(movimento + 1, limite);
}

//Função para movimentação da Rainha
void moverRainha(int movimento, int limite){
    //Verificando se atingiu o limite de movimentos
    if(movimento >= limite)
        return;

    //Exibindo o movimento da rainha
    printf("Esquerda\n");

    //Chamando a função recursivamente e adicionando incremento no movimento
    moverRainha(movimento + 1, limite);
}

int main(){
    //Iniciando a logica de movimentação da Torre
    printf("\n========= Movimentação da TORRE =========\n");
    moverTorre(0, 5);

    //Iniciando a logica de movimentação do Bispo
    printf("\n========= Movimentação do BISPO =========\n");
    moverBispo(0, 5);

    //Iniciando a logica de movimentação da Rainha
    printf("\n========= Movimentação da RAINHA =========\n");
    moverRainha(0, 8);

    //Iniciando a logica de movimentação do Cavalo
    printf("\n========= Movimentação do CAVALO =========\n");

    //Declarando variáveis para controlar o movimento do cavalo
    int movimentoVertical, movimentoHorizontal;

    //Loop para simular o movimento do cavalo: duas casas para cima e uma para a direita
    for(movimentoVertical = 0, movimentoHorizontal = 0; movimentoVertical < 3 && movimentoHorizontal < 2; movimentoVertical++){
        //Movendo o cavalo verticalmente (para cima)
        if(movimentoVertical < 2){
            printf("Cima\n");
            continue;
        }

        //Movendo o cavalo horizontalmente (para a direita) quando atingir a segunda casa vertical
        for(; movimentoHorizontal < 1; ){
            printf("Direita\n");
            movimentoHorizontal++;
        }
    }

    return 0;
}
