#include <stdio.h>

void movertorre(int casast){
    if (casast > 0){
        printf("Uma Casa a Direita \n");
        movertorre(casast - 1);
    }
}
void moverbispo(int casasb){
    if (casasb > 0){
        printf("Uma Casa a Direita \n");
        printf("Uma Casa para Cima \n");
        moverbispo(casasb - 1);
    }
}
void moverrainha(int casasr){
    if (casasr > 0){
        printf("Uma Casa a Esquerda \n");
        moverrainha(casasr - 1);
    }
}
int main(){

    printf("**** MOVIMENTO DA TORRE **** \n");
    movertorre(5);

    printf("**** MOVIMENTO DO BISPO **** \n");
    moverbispo(5);

    printf("**** MOVIMENTO DA RAINHA **** \n");
    moverrainha(8);

    printf("**** MOVIMENTO DO CAVALO **** \n");

    int c, mov_cavalo = 1; // flag controla o movimento em L

    while (mov_cavalo--){

        for (c = 0; c < 2; c++){
            printf("Uma casa para Baixo\n"); // imprime baixo 2x
        }
        printf("Uma casa para a Esquerda\n"); //imprime esquerda 1x
        }
    return 0;
}
