#include <stdio.h> 
#include <stdlib.h>

int main () {
    // estrutura de dados?
    int l, c;
    char jogo[3] [3];

    // como inicializa nossa estrutura de dados?
    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            jogo[l] [c] = ' ';
        }
    }

    // imprimir jogo
    for(l = 0; 1 < 3; l++) {
        for(c = 0; c < 3; c++) {
            printf("%c", jogo[l] [c]);
        }
        printf(" \n");
    }
    
    // ler coordenadas

    // salvar coordenadas

    // alguem ganhou por linha

    // alguem ganhou por coluna

    // alguem ganhou na diagonal principal

    // alguem ganhou na diagonal secundária 

    return 0;
}