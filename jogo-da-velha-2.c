#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    char *matrizes[3][3]; //matriz principal
    int row, column, block; // linhas e colunas da matriz
    char playerTime = "";

    //for que insere "." em cada item da matriz;
    for(int m = 0; m < 3; m++){
          printf("\n");
        for(int n =0; n < 3; n++){
            printf("\t");

          matrizes[m][n] = ".";
          printf("%s", matrizes[m][n]);
        }
        printf("\n\n");
    }

    //o playCounter e responsavel por contar cada jogada;
    //é incrementado cada vez que uma jogada e feita,
    //e decrementado cada vez que a jogada é impossibilitada
    //pelo fato do espaço desejado ja estar ocupado, para que a
    //quantidade de jogadas por partida sempre seja 9;

    for(int playCounter = 0; playCounter < 9; playCounter++){

        //define o aviso de vez de jogada para player1 e player2;
        if(playCounter%2 == 0){
            printf("\tjogada do Player1\n");

        }
        else{
            printf("\tjogada do Player2\n");
        }

        printf("\tem que área você quer jogar?\t");
        scanf("%i", &block);

        //determina qual acao executar se o jogador escolher um bloco
        //invalido, escolhendo automaticamente a mais proxima do numero digitado;
        if(block > 9){
            block = 9;
        }
        else if(block < 1){
            block = 1;
        }

        if(block > 0 && block <= 3){
            row = 0;
            column = --block;
        }
        else if(block >=4 && block <= 6){
            row = 0;
            column = --block;
        }
        else if(block >= 7 && block <= 9){
            row = 0;
            column = --block;
        }

        if(matrizes[row][column] == "."){
            if(playCounter%2 == 0){
                printf("jogada do Player1");
                matrizes[row][column] = "X";

            }
            else{
                printf("jogada do Player2");
                matrizes[row][column] = "O";
            }

            //Printa o jogo-da-velha a cada vez que uma jogada é feita
            //system("cls");
            for(int row = 0; row < 3; row++){
                for(int column = 0; column < 3; column++){
                    printf("%c", matrizes[row][column]);
                }
            }
        }

        //o else determina o decremento da quantidade
        //de jogadas, para que nao seja contada uma jogada invalida;

        else{
            printf("\n\tespaço ocupado. faça outra jogada");
            playCounter--;
        }
    }
}
