#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(void){
    setlocale(LC_ALL, "");
    system("color 0A");
    char *matrizes[3][3]; //matriz principal
    int row, column, area; // linhas e colunas da matriz

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
        //printa a vez de cada jogador
        if(playCounter %2 == 0){
            printf("\n\tJogada do Player 1");
        }else{
            printf("\n\tJogada do Player 2");
        }

        printf("\n\tem que área você deseja jogar?\t");
        scanf("%i", &area);

        //determina qual acao executar se o jogador escolher uma coluna
        //invalida, escolhendo automaticamente a mais proxima do numero digitado;
        if(area > 9){
            area = 9;
        }
        if(area < 1){
            area = 1;
        }

        //executa ações de acordo com a area escolhida
        if(area >= 1 && area <= 3){
           row = 0;
           column = area - 1;
        }
        else if(area >= 4 && area <= 6){
            row = 0;
            column = area - 1;
        }
        else if(area >= 7 && area <= 9){
            row = 0;
            column = area - 1;
        }

        if(matrizes[row][column] == "."){
            if(playCounter%2 == 0){
                matrizes[row][column] = "X";

            }
            else{
                matrizes[row][column] = "O";
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
            printf("\n\t\tEspaco ocupado. Faça outra jogada\n");
            playCounter--;
        }
        int winnerPlayer = (playCounter%2) + 1;

        //casos de vitória por linhas
        if(matrizes[0][0] == matrizes[0][1] && matrizes[0][0] == matrizes[0][2] && matrizes[0][0] != "."){
            playCounter = 9;
            printf("Fim da jogada, o Player %i venceu!", winnerPlayer);
        }
        else if(matrizes[1][0] == matrizes[1][1] && matrizes[1][0] == matrizes[1][2] && matrizes[1][0] != "."){
            playCounter = 9;
            printf("Fim da jogada, o Player %i venceu!", winnerPlayer);
        }
        else if(matrizes[2][0] == matrizes[2][1] && matrizes[2][0] == matrizes[2][2] && matrizes[2][0] != "."){
            playCounter = 9;
            printf("\nFim da jogada, o Player %i venceu!\n", winnerPlayer);
        }

        //casos de vitória por colunas
        else if(matrizes[0][0] == matrizes[1][0] && matrizes[0][0] == matrizes[2][0] && matrizes[0][0] != "."){
            playCounter = 9;
            printf("\nFim da jogada, o Player %i venceu!\n", winnerPlayer);
        }else if(matrizes[0][1] == matrizes[1][1] && matrizes[0][1] == matrizes[2][1] && matrizes[0][1] != "."){
            playCounter = 9;
            printf("\nFim da jogada, o Player %i venceu!\n", winnerPlayer);
        }else if(matrizes[0][2] == matrizes[1][2] && matrizes[0][2] == matrizes[2][2] && matrizes[0][2] != "."){
            playCounter = 9;
            printf("\nFim da jogada, o Player %i venceu!\n", winnerPlayer);
        }

        //casos de vitória cruzada
        else if(matrizes[0][2] == matrizes[1][1] && matrizes[0][2] == matrizes[2][0] && matrizes[0][2] != "."){
            playCounter = 9;
            printf("\nFim da jogada, o Player %i venceu!\n", winnerPlayer);
        }else if(matrizes[0][0] == matrizes[1][1] && matrizes[0][0] == matrizes[2][2] && matrizes[0][0] != "."){
            playCounter = 9;
            printf("\nFim da jogada, o Player %i venceu!\n", winnerPlayer);
        }

    }

}
