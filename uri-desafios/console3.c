#include <stdio.h>
#include <stdlib.h>

int main(void){

    int m, n, mFatorial, nFatorial, result;
    mFatorial = nFatorial = 0;
    scanf("%i", &m);
    scanf("%i", &n);

    if(m >= 0 && m <=20 && n >= 0 && n <= 20){
        for(int i = m - 1; i >= 1; i--){
            mFatorial += m * i;
        }
        for(int j = n - 1; j >= 1; j--){
            nFatorial += n * j;
        }

        if(m == 0){
            mFatorial = 1;
        }
        if(n == 0){
            nFatorial = 1;
        }
    }

    result = mFatorial + nFatorial;

    printf("%i", result);
}
