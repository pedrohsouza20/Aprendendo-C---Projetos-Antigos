#include <stdio.h>
#include <stdlib.h>

int findSmallest(int array[], int arraySize){
    int smallestNumber = array[0];

    for(int i = 1; i < arraySize; i++){
        if(array[i] < smallestNumber){
            smallestNumber = array[i];
        }
    }

    return smallestNumber;
}

int addSmallerInArray(){

}

int main(void){
    int arrayNums[] = {12, 0, 56, 5, 9, 3, 0, -2, 15, 4, 7, -850, -200, 100, -30, 22, 8, 0};
    int ordenedArray[sizeof(arrayNums)/sizeof(arrayNums[0])];
    int minorNumber;
    int arraySize = sizeof(arrayNums)/sizeof(arrayNums[0]);
    minorNumber = findSmallest(arrayNums, sizeof(arrayNums)/sizeof(arrayNums[0]));


    for(int i = 0; i < ordenedArray; i++){

        ordenedArray[i] = minorNumber;
        arrayNums[0] = arrayNums[i];
        findSmallest(arrayNums, sizeof(arrayNums)/sizeof(arrayNums[0]));

    }

    printf("%i", ordenedArray[5]);
}
