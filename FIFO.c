#include "FIFO.h"
#include <stdio.h>
#include <stdint.h>
#include <math.h>

#ifndef MAX_FIFO
#define MAX_FIFO 10

static int start=0;
static int MyFIFO[MAX_FIFO-1][0];
static int on[MAX_FIFO-1];
static int FIFOSize[MAX_FIFO-1];
static int tail[MAX_FIFO-1];

void MyFIFOStart(void) {
    start = 1;
    for(int i = 0; i < MAX_FIFO-1; i++) {
        on[i] = 0;
        FIFOSize[i] = 0;
        tail[i] = 0;
    }
}

void MyFIFOInit(int FIFO, int size) {
    if(start == 0) {
        MyFIFOStart();
    }

    FIFO = FIFO - 1; 
    if(on[FIFO] == 1){
        printf("Array already Initialized.\n");
    }
    else
    {
        on[FIFO] = 1;
        FIFOSize[FIFO] = size;
        MyFIFO[FIFO][size];
        for(int i = 0; i < size; i++){
            MyFIFO[FIFO][i] = 0;
        }
    }
}

void MyFIFOInsert(int FIFO,int data) {
    FIFO = FIFO - 1; 
    if(on[FIFO] == 1) {
        if(tail[FIFO] == FIFOSize[FIFO]){
            printf("FIFO %d is full.\n",FIFO);
        }
        else{
            MyFIFO[FIFO][tail[FIFO]] = data;
            tail[FIFO] = tail[FIFO] + 1;
        }
    }
    else
    {
        printf("FIFO %d not initialized.\n",FIFO);
    }
}

int MyFIFORemove(int FIFO) {
    int data;
    FIFO = FIFO - 1; 
    if(on[FIFO] == 1) {
        if(tail[FIFO] > 0) {
            data = MyFIFO[FIFO][0];
            MyFIFO[FIFO][0] = 0;

            for(int i = 1; i < tail[FIFO]; i++) {
                MyFIFO[FIFO][i-1] = MyFIFO[FIFO][i];        
            }
            MyFIFO[FIFO][tail[FIFO]] = 0;
            tail[FIFO] = tail[FIFO] - 1;
            return data;
        }else{
            printf("FIFO %d is empty.\n",FIFO);
            return -1;
        }
    }else{
        printf("FIFO %d not initialized.\n",FIFO);
        return -1;
    }
}

int MyFIFOPeep(int FIFO) {
    FIFO = FIFO - 1; 
    if(on[FIFO] == 1){

        return MyFIFO[FIFO][0];
    
    }
    else
    {
        printf("FIFO %d not initialized.\n",FIFO);
        return -1;
    }

}

int MyFIFOSize(int FIFO) {
    FIFO = FIFO - 1; 
    if(on[FIFO] == 1){

        return tail[FIFO];
    
    }
    else
    {
        printf("FIFO %d not initialized.\n",FIFO);
        return -1;
    }
}

#endif