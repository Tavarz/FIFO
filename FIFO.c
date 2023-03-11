#include "FIFO.h"
#include <stdio.h>
#include <stdint.h>
#include <math.h>

#ifndef MAX_FIFO
#define MAX_FIFO 10

static int start=0;
static int MyFIFO[MAX_FIFO][0];
static int on[MAX_FIFO];
static int FIFOSize[MAX_FIFO];
static int tail[MAX_FIFO];

void MyFIFOStart(void) {
    start = 1;
    for(int i = 0; i < MAX_FIFO; i++) {
        on[i] = 0;
        FIFOSize[i] = 0;
        tail[i] = 0;
    }
}

void MyFIFOInit(int FIFO, int size) {
    if(start == 0) {
        MyFIFOStart();
    }

    if(on[FIFO] == 1){
        printf("Array already Initialized.\n");
    }
    else
    {
        on[FIFO] = 1;
        FIFOSize[FIFO] = size;
        for(int i = 0; i < size; i++){
            MyFIFO[FIFO][i] = 0;
        }
    }
}

void MyFIFOInsert(int FIFO,int data) {
    if(on[FIFO] == 1) {
        if(tail[FIFO] == FIFOSize[FIFO]){
            printf("FIFO %f is full.\n",FIFO);
        }
        else{
            MyFIFO[FIFO][tail[FIFO]] = data;
            tail[FIFO] = tail[FIFO] + 1;
        }
    }
    else
    {
        printf("FIFO %f not initialized.\n",FIFO);
    }
}

int MyFIFORemove(int FIFO) {
    if(on[FIFO] == 1) {
        if(tail[FIFO] != 0) {
            int data = MyFIFO[FIFO][0];

            for(int i = 1; i < tail[FIFO]; i++) {
                MyFIFO[FIFO][i-1] = MyFIFO[FIFO][i];
            }
            tail[FIFO] = tail[FIFO] - 1;
        }
    }
    else
    {
        printf("FIFO %f not initialized.\n",FIFO);
    }
}

int MyFIFOPeep(int FIFO) {
    return MyFIFO[FIFO][tail[FIFO]];
}

int MyFIFOSize(int FIFO) {
    return p-1;
}

#endif