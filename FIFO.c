#include "FIFO.h"
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int fifo[0];
int p=0;

void MyFIFOInit(int size) {

    fifo[size];
    int i;
    for(i = 0; i < size; i++){
        
        fifo[i] = 0;

    }

}

void MyFIFOInsert(int data) {
    if(MyFIFOSize() == 0){
        printf("FIFO full!");
        exit();
    }
    fifo[p] = data;
    p++;
}

int MyFIFORemove() {
    int data = fifo[0];
    for(int k = 1; k < sizeoffifo ; k++){
        fifo[k-1] = fifo[k];
    }
    return data;
}

int MyFIFOPeep() {
    return fifo[0];
}

int MyFIFOSize() {
    size_t space = sizeof(fifo) - p;
    return space;
}