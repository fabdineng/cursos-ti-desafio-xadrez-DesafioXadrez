#include <stdio.h>

void movertorre(int casas){
    if (casas > 0){
        printf("Uma Casa a Direita \n");
        movertorre(casas - 1);
    }
}

int main(){

    movertorre(5);
    
    return 0;
}