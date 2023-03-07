#ifndef __FIFO__H_
#define __FIFO__H_

#include <stdio.h>
#include <stdint.h>
#include <math.h>



void MyFIFOInit(int size);
int MyFIFOInsert(int data);
int MyFIFORemove();
int MyFIFOPeep();
int MyFIFOSize();

#endif
