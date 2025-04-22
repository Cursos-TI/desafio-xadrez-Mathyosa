#include <stdio.h>

int main(){

    int bispo, torre, rainha;
    
    bispo = 0; //Posição inicial do bispo
    torre = 0; //Posição inicial da torre
    rainha = 0; //Posição inicial da rainha
    
    //Movimento da torre
    
    for (torre = 0; torre < 5; torre++) 

    { 
printf("Direita %d\n", torre);

}
    //Movimento do bispo
   
    while (bispo < 5) {
    printf("Cima e Direita %d\n", bispo);
        bispo++;
    }

    //Movimento da rainha

    do {
    printf("Esquerda %d\n", rainha);
        rainha++;
    } while (rainha < 8);

    return 0;
}