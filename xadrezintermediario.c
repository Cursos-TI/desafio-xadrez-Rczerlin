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

    
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("Movimento do Cavalo (for + while) - 2 casas para baixo e 1 para a esquerda:\n");
    
    
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");

        
        int j = 0;
        while (j < 1) {
            j++;
        }
    }

    
    int k = 0;
    while (k < movimentosEsquerda) {
        printf("Esquerda\n");
        k++;
    }

    return 0;
}