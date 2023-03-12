/**
 * \file:   FIFO.h
 * \author: Bernardo Tavares <bernardot@ua.pt> and João Rodrigues <jpcr@ua.pt>
 *
 * \date 11 March 2023
 * 
 * \brief Contains functions to initialize a FIFO and insert/remove elements from it
 *        Also has functions to return the oldest element on the fifo and return its size
 *        The maximum number of FIFOs is 10
 */

#ifndef __FIFO__H_
#define __FIFO__H_

#include <stdio.h>
#include <stdint.h>
#include <math.h>

/**
 * \brief Creates an array "on" of flags to check if a FIFO has been already initialized
 *        Also creates 2 arrays to save each FIFO's size and tail
 * 
 * \return       Doesn't return anything
 */

void MyFIFOStart(void);

/**
 * \brief Initializes a FIFO with size "size"
 * 
 * Initially checks if the chosen FIFO has already been initialized. If it has
 * prints "Array already initialized". 
 * If not, initializes the chosen FIFO with input argument "size".
 * Also saves the size of the FIFO in the array that saves all FIFO's sizes.
 * 
 * \param FIFO   FIFO array number in the array of FIFOs
 * \param size   Size of FIFO
 * \return       Doesn't return anything
 */

void MyFIFOInit(int FIFO, int size); 

/**
 * \brief Adds an elemnt to the FIFO
 * 
 * Initially checks if the chosen FIFO has been initialized, then checks if 
 * the FIFO is full with the help of the array that save all FIFO's sizes and tails.
 * If it's full prints a message saying it's full.
 * If it's not full adds the new element to the last position in the array and
 * increments the tail of this FIFO.
 * 
 * \param FIFO   FIFO array number in the array of FIFOs
 * \param data   User input data
 * \return       Doesn't return anything
 */

void MyFIFOInsert(int FIFO,int data); 

/**
 * \brief Removes the oldest element from the FIFO
 * 
 * Checks if the FIFO has been initialized before:
 * If it hasn't prints "FIFO not initialized"
 * Saves the FIFO's first value in a variable "data", sets the first value to 0 and 
 * then shifts all values to the left (1 position). 
 * After it sets the tail value to 0 and updates FIFO's tail value by decrementing 
 * the tail value by 1.
 * 
 * \param FIFO   FIFO array number in the array of FIFOs
 * \return       Returns the oldest element 
 */

int MyFIFORemove(int FIFO); 

/**
 * \brief Returns the oldest element on the FIFO without removing it
 * 
 * Checks if the FIFO has been initialized before:
 * If it hasn't prints "FIFO not initialized"
 * If it has returns the FIFO's oldest element
 * 
 * \param FIFO   FIFO array number in the array of FIFOs
 * \return       Returns the FIFO's oldest element 
 */

int MyFIFOPeep(int FIFO);

/**
 * \brief Returns the number of elements on the FIFO
 * 
* Checks if the FIFO has been initialized before:
 * If it hasn't prints "FIFO not initialized"
 * If it has returns the number of elements on the FIFO
 * 
 * \param FIFO   FIFO array number in the array of FIFOs
 * \return       Returns the number of elements on the FIFO
 */

int MyFIFOSize(int FIFO);

#endif
