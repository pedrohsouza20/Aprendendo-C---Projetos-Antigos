#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(void){
    char *matrizes[3][3]; //matriz principal
    int line, column; // linhas e colunas da matriz

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
        printf("\tem que linha voce quer jogar?\t");
        scanf("%i", &line);

        //determina qual acao executar se o jogador escolher uma linha
        //invalida, escolhendo automaticamente a mais proxima do numero digitado;
        if(line > 3){
            line = 3;
        }
        else if(line < 1){
            line = 1;
        }
        line--; //decrementa a line, para equivaler ao index;

        printf("\tem que coluna deseja jogar?\t");
        scanf("%i", &column); //decrementa a column, para equivaler ao index;

        //determina qual acao executar se o jogador escolher uma coluna
        //invalida, escolhendo automaticamente a mais proxima do numero digitado;
        if(column > 3){
            column = 3;
        }
        else if(column < 1){
            column = 1;
        }
        column--;

        if(matrizes[line][column] == "."){
            if(playCounter%2 == 0){
                matrizes[line][column] = "X";

            }
            else{
                matrizes[line][column] = "O";
            }

            //Printa o jogo-da-velha a cada vez que uma jogada é feita
            system("cls");
            for(int m = 0; m < 3; m++){
                printf("\n");
                for(int n =0; n < 3; n++){
                    printf("\t");
                    printf("%s", matrizes[m][n]);
                }

                printf("\n\n");
            }
        }


        //o else determina o decremento da quantidade
        //de jogadas, para que nao seja contada uma jogada invalida;

        else{
            printf("\n\tespaco ocupado. faca outra jogada");
            playCounter--;
        }

    }
}

