#include <stdio.h>

int main() {
    
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre (for) - 5 casas para a direita:\n");
    
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("Movimento do Bispo (while) - 5 casas na diagonal para cima e direita:\n");
    
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("Movimento da Rainha (do-while) - 8 casas para a esquerda:\n");
    
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}