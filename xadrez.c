#include <stdio.h>

    
    //Movimento da torre
    

    void movimento_torre(int casas) {
        if (casas > 0) {
            printf("Direita %d\n", casas);
            movimento_torre(casas - 1);
        }
        
    printf("\n");
    }
    
    //Movimento do bispo
   
   void movimento_bispo(int casas) 
   {
        if (casas > 0) {
            printf("Cima e Direita \n", casas);
            movimento_bispo(casas - 1);
           
            }
            printf("\n");
        }
       

    //Movimento da rainha

    void movimento_rainha(int casas) {
        if (casas > 0) {
            printf("Esquerda \n", casas);
            movimento_rainha(casas - 1);
        }
        printf("\n");
    }
 
    int main() {
    movimento_bispo(5); //Movimento do bispo
    movimento_torre(5); //Movimento da torre
    movimento_rainha(8); //Movimento da rainha
    printf ("\n");

    
    //Movimento do cavalo

    for(int cavalo = 0; cavalo <3; cavalo++) {
        printf("Cima %d\n", cavalo);

        while (cavalo < 1) {
            printf("Cima %d\n", cavalo);
            cavalo++;
        }
        do {
            printf("Direita %d\n", cavalo);
            cavalo++;
        } while (cavalo < 2);
    }
    printf ("\n");

    return 0;
}
