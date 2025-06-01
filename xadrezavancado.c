#include <stdio.h>


void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


void moverBispoRecursivo(int casas) {
    if (casas == 0) return;


    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispoRecursivo(casas - 1);
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre (recursivo) - 5 casas para a direita:\n");
    moverTorre(casasTorre);

    printf("Movimento do Bispo (recursivo + loop aninhado) - 5 casas na diagonal para cima e direita:\n");
    moverBispoRecursivo(casasBispo);

    printf("Movimento da Rainha (recursivo) - 8 casas para a esquerda:\n");
    moverRainha(casasRainha);

   
    printf("Movimento do Cavalo (loop aninhado) - 2 casas para cima e 1 para a direita:\n");
    for (int i = 1; i <= 2; i++) {
        printf("Cima\n");

        int j = 1;
        while (j <= 1) {
            if (i == 2) {
                printf("Direita\n");
            }
            j++;
        }
    }

    return 0;
}