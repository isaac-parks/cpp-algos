#include <random>
#include <iostream> 

#include "shuffle.h"

void shuffle(int arr[], int size) {
    int save;
    for (int i = 1; i <= size; i++) {
        save = arr[i];
        std::random_device rd; 
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(0,1);
        arr[i] = arr[distr(gen)];
        arr[distr(gen)] = save;
    }
}