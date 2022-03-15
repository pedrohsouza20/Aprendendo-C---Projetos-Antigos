#include <stdio.h>
#include <stdlib.h>

int main(){

    int stYear, ndYear, rdYear, thYear;
    stYear = 2000;
    //bissexto
    if(stYear % 4 != 1 && stYear % 100 != 0 &&stYear % 400 != 1){
        printf("bissexto");
    }


}
