#include <stdio.h>



///recursividade

void recursiveT(int r) {
    if (r > 0) {
        printf("ESQUERDA - %d\n", r);  // Recursividade para Torre
        recursiveT(r - 1);  
    }
}

void recursiveR(int r) {
    if (r > 0) {
        printf("ESQUERDA - %d\n", r); // Recursividade para Rainha
        recursiveR(r - 1);  
    }
}



int main() {


        //////////NOVATO

       printf("\nDESAFIO MATE CHECK\n\n");

    int bispo = 0;
    int torre = 0;
    int rainha = 0;

    printf("Movimentacao do bispo:\n\n");

    for (int bispo = 0; bispo <= 4; bispo++)
    {
        printf("Direita\n");
        printf("Cima - %d \n", bispo + 1);       
    }



    printf("\nMovimentacao da torre:\n\n");

    do{
        printf("Direita - %d\n", torre + 1);
        torre++;
    } while (torre <= 4);
    


     printf("\nMovimentacao da rainha:\n\n");

    do{
        printf("Esquerda - %d\n", rainha + 1);
        rainha++;
    } while (rainha <= 7);


    ////////AVENTUREIRO

    printf("\nMovimentacao do cavalo:\n\n");

    int cavalo = 0;


    for (int cavalo = 0; cavalo <= 1; cavalo++)
    {
        printf("cima - %d\n", cavalo + 1);
        if (cavalo == 1)
        {
            printf("Direita - %d\n", cavalo);
        }          
    }

    ////////AVANÇADO

printf("\nSegunda Movimentacao do cavalo:\n\n");

int cavalo2 = 0;


for (int cavalo2 = 0; cavalo2 <= 8; cavalo2++) {

        if (cavalo2 == 3) continue; // Pula a iteração quando %d for 3

        if (cavalo2 < 2)
        {
            printf("CIMA - %d \n", cavalo2 +1);
        }
        if (cavalo2 == 2)
        {
            printf("Direita - %d\n\n", cavalo2 - 1);
        }
  
        if (cavalo2 == 4) break;  // Sai do loop quando %d for 4
    }

    int bispo2 = 5;
    int torre2 = 5;
    int rainha2 = 8;

    printf("\nSegunda Movimentacao do bispo: [recursiva]\n\n");

    for (int bispo2 = 5; bispo2 >= 1; bispo2--)
    {
        printf("Esquerda %d \n", bispo2);
        printf("Baixo \n\n");       
    }


    printf("\nSegunda movimentacao da torre: [recursiva] \n\n");

    recursiveT(torre2);

    printf("\nSegunda movimentacao da Rainha: [recursiva] \n\n");

    recursiveT(rainha2);

    return 0;
}