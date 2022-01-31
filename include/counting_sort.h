//
// Created by thors on 1/30/2022.
//

#include <assert.h>
#include <iostream>
using namespace std;
//Sorting Algorithm using 3 different arrays
void CountingSort(int* arr, int sizeOfArray){
    int* output = new int[sizeOfArray];
    //Finds Maximum
    int max = INT_MIN;
    for(int i = 0; i < sizeOfArray; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    //Reset Arrays
    int totals[max + 1];
    for(int i = 0; i < max + 1; i++){
        totals[i] = 0;
    }
    for(int i = 0; i < sizeOfArray; i++){
        output[i] = 0;
    }

    //Count totals for each number in array
    for(int i = 0; i < sizeOfArray; i++){
        totals[arr[i]]++;
    }

    //Adds every 2 indexes of totals array
    for(int i = 1; i <= max; i++){
        totals[i] += totals[i - 1];
    }

    //Adds count to final output array
    for(int i = 0; i < sizeOfArray; i++){
        output[totals[arr[i]] - 1] = arr[i];
        totals[arr[i]]-- ;
    }
    for(int i = 0; i < sizeOfArray; i++) {
        arr[i] = output[i];
    }
}
