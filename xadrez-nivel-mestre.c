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
        movertorre(casasb - 1);
    }
}
int main(){

    movertorre(5);
    moverbispo(5);
    
    return 0;
}
