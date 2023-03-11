#ifndef __FIFO__H_
#define __FIFO__H_

#include <stdio.h>
#include <stdint.h>
#include <math.h>

void MyFIFOStart(void);
void MyFIFOInit(int FIFO, int size); 
void MyFIFOInsert(int FIFO,int data); 
int MyFIFORemove(int FIFO); 
int MyFIFOPeep(int FIFO);
int MyFIFOSize(int FIFO);

#endif
