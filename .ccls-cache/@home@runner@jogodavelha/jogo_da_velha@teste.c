#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int escolha, opcao1;

do {
    int apagar = system("clear");
    printf("JOGO DA VELHA\n\n");
    printf("1 - Iniciar\n");
    printf("2 - Sair\n");
    printf("Diga sua escolha: ");
    int deu_certo = scanf("%d", &escolha);

    switch (escolha) {
        case 1: {
            int jogador = 1, ganhou = 0, jogadas = 0, linha, coluna;
            char jogo[3][3];
            char simbolo1 = '0', simbolo2 = 'X';

            for (int l = 0; l < 3; l++) {
                for (int c = 0; c < 3; c++) {
                    jogo[l][c] = ' ';
                }
            }

    deu_certo = system("clear");
    printf("Escolha com qual símbolo jogar\n");
    printf("1 - (X)\n");
    printf("2 - (0)\n");
    printf("Diga sua opção: ");
    int opcao;
    deu_certo = scanf("%d", &opcao);

    if (deu_certo) {
        if (opcao == 1) {
            simbolo1 = 'X';
            simbolo2 = '0';
            printf("JOGADOR 1: Digite a linha e a coluna que deseja jogar:\n");
        } else if (opcao == 2) {
            simbolo1 = 'X';
            simbolo2 = '0';
            jogador = 2; // Começa como jogador 2
            printf("JOGADOR 2: Digite a linha e a coluna que deseja jogar:\n");
        } else {
            printf("Opção inválida! O jogador 1 será (0) e o jogador 2 será (X) por padrão.\n");
        }
    } else {
        printf("Opção inválida! O jogador 1 será (0) e o jogador 2 será (X) por padrão.\n");
    }

    getchar(); // Limpar o buffer de entrada

do {
    deu_certo = system("clear");
    printf("\n\n\t 0   1   2\n\n");
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            if (c == 0)
                printf("\t");
            printf(" %c ", jogo[l][c]);
            if (c < 2)
                printf("|");
            if (c == 2)
                printf("  %d", l);
        }
        if (l < 2)
            printf("\n\t-----------");
        printf("\n");
    }

do {
    
    printf("\n\nJOGADOR 1 = %c\nJOGADOR 2 = %c\n", simbolo1, simbolo2);
    printf("\nJOGADOR %d: Digite a linha e a coluna que deseja jogar: ", jogador);
    char coord[3]; // Uma matriz de caracteres para armazenar a entrada do usuário
    deu_certo = scanf("%2s", coord); // Ler no máximo 2 caracteres
    deu_certo = scanf("%d %d", &linha, &coluna);
        
    // Verificar se a entrada possui dois caracteres e o segundo é um espaço
    if (deu_certo != 2) {
        while (getchar() != '\n'); // Limpar buffer de entrada
        linha = coluna = -1;
    } else if (jogo[linha][coluna] == simbolo1 || jogo[linha][coluna] == simbolo2) {
        printf("Posição inválida! Por favor, escolha outra posição.\n");
        continue;
    } 
        
    if (deu_certo != 1 || strlen(coord) != 2 || coord[1] != ' ' || (coord[0] < 0 || coord[0] >= 3) || (coord[2] < 0 || coord[2] >= 3)) {
        printf("Posição inválida! Por favor, digite duas coordenadas válidas com espaçamento.\n");
        continue;
    }

    linha = coord[0] - '0'; // Convertendo o primeiro caractere para inteiro
    coluna = coord[2] - '0'; // Convertendo o terceiro caractere para inteiro

    if (jogo[linha][coluna] != ' ') {
        printf("Posição inválida! Por favor, escolha outra posição.\n");
        continue;
    }
} while (linha < 0 || linha >= 3 || coluna < 0 || coluna >= 3 || jogo[linha][coluna] != ' ');


    if (jogador == 1) {
        jogo[linha][coluna] = simbolo1;
        jogador = 2;
    } else {
        jogo[linha][coluna] = simbolo2;
        jogador = 1;
    }

    jogadas++;

for (int l = 0; l < 3; l++) {
        if (jogo[l][0] == jogo[l][1] && jogo[l][1] == jogo[l][2] && jogo[l][0] != ' ') {
            ganhou = jogo[l][0] == simbolo1 ? 1 : 2;
        }
    }
    for (int c = 0; c < 3; c++) {
        if (jogo[0][c] == jogo[1][c] && jogo[1][c] == jogo[2][c] && jogo[0][c] != ' ') {
            ganhou = jogo[0][c] == simbolo1 ? 1 : 2;
        }
    }
    if (jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] && jogo[0][0] != ' ') {
        ganhou = jogo[0][0] == simbolo1 ? 1 : 2;
    }
    if (jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0] && jogo[0][2] != ' ') {
        ganhou = jogo[0][2] == simbolo1 ? 1 : 2;
    }
} while (ganhou == 0 && jogadas < 9);

    deu_certo = system("clear");
    printf("\n\n\t 0   1   2\n\n");
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            if (c == 0)
                printf("\t");
            printf(" %c ", jogo[l][c]);
            if (c < 2)
                printf("|");
            if (c == 2)
                printf("  %d", l);
        }
    if (l < 2)
        printf("\n\t-----------");
    printf("\n");
    }

    if (ganhou != 0)
        printf("\nParabéns! O jogador %d venceu!\n", ganhou);
    else
        printf("\nDeu Velha! O jogo finalizou sem ganhador!\n");

    printf("\nDigite 1 para jogar novamente, ou qualquer outra tecla para sair: ");
    deu_certo = scanf("%d", &opcao1);
        if (deu_certo != 1) {
            opcao1 = 0;
        }
        break;
    }
    case 2:
        printf("Até logo!\n");
        opcao1 = 0;
        break;
    }
} while (opcao1 == 1);

    return 0;
}