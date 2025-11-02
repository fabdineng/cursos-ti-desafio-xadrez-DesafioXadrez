#include <stdio.h>

int main(){
    
    int t, b, r, c;

    // mover a torre
    printf("**** MOVIMENTO DA TORRE **** \n");
    for (t = 0; t < 5; t++) {
    
        printf("Uma Casa a Direita \n"); // direção do movimento
    }
    // mover o bispo
    b = 0;
     printf("**** MOVIMENTO DO BISPO **** \n");
     while (b < 5) {

        printf("Uma Casa a Direita \n"); // direção do movimento
        printf("Uma Casa para Cima \n"); // direção do movimento
        b++;

     }
     printf("**** MOVIMENTO DA RAINHA **** \n");
    do {
        printf("Uma Casa a Esquerda \n"); // direção do movimento
        r++;
    } while (r < 8);
    printf("**** MOVIMENTO DO CAVALO **** \n");
    int mov_cavalo = 1; // flag controla o movimento em L

    while (mov_cavalo--){

        for (c = 0; c < 2; c++){
            printf("Uma casa para Baixo\n"); // imprime baixo 2x
        }
        printf("Uma casa para a Esquerda\n"); //imprime esquerda 1x
        }
        
    return 0;
}