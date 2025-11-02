int main(){
    
    int t, b, r;

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
    r = 0;
    do {
        printf("Uma Casa a Esquerda \n"); // direção do movimento
        r++;
    } while (r < 8); 

    return 0;
}