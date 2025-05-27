#include <stdio.h>
int main(){
    //Este desafio foca na movimentação das peças de xadrez usando estruturas de repetição em C.
    //usando  for, while e do-while para simular movimentos no tabuleiro.
 
    printf("*=+=+=+Movimento da Torre+=+=+=*\n");
    //movendo a Torre 5 casas para a direita
    for(int Torre = 0; Torre <= 5; Torre++){
        printf("Direita\n");
    }

    printf("\n*=+=+=+Movimento do Bispo+=+=+=*\n\n");

    //Definindo o movimento do Bispo em 5 casas para diagonal
    int Bispo = 0;
    while (Bispo <= 5){
        printf("Cima, Direita\n");
        Bispo++;
    }

    printf("\n*=+=+=+Movimento da Rainha+=+=+=*\n\n");

    //definindo o movimento da Rainha para todas as direções 8 casas para esquerda
    int Rainha = 0;
    do{
        printf("Esquerda\n");
        Rainha++;
    } while (Rainha <= 8);

    printf("\n*=+=+=+Movimento do Cavalo+=+=+=*\n\n");
    //definindo o movimento do Cavalo em duas casas para baixo e uma para esquerda
    int Cavalo = 1;
    while (Cavalo--){
        for(int i = 0;i < 2; i++){
            printf("cima\n");
        }
        printf("Esquerda\n");
    }
    
}
