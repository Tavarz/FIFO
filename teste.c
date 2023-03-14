/** @file teste.c
 * @brief teste.c file brief decription 
 *
 * This script creates an interface to interact with an array of FIFOs 
 * 
 * @author Bernardo Tavares bernardot@ua.pt and João Rodrigues jpcr@ua.pt
 * @date 14 March 2023
 * @bug No known bugs.
 */

/* Includes */
#include "FIFO.h"
#include <stdio.h>
#include <stdint.h>

/**
 * @brief Brief decription of main().
 *
 * In an infinite loop creates a menu that gives the user
 * different ways to interact with a FIFO :
 * - Initialize a FIFO
 * - Insert elements
 * - Remove Elements
 * - Peep Elements
 * - Return FIFO's size
 * Main has no input arguments.
 * 
 * @return main() always returns 0
 */

int main(void) {
    int option,size,data,free,fifo;
    while(1) {
        printf("\nChoose an option: \n1:MyFIFOInit()\n2:MyFIFOInsert()\n3:MyFIFORemove()\n4:MyFIFOPeep\n5:MyFIFOSize\n\n");
        scanf("%d",&option);
        switch(option)  {
            case(1):
                printf("FIFO(1 to 10):");
                scanf("%d",&fifo);
                printf("FIFO size:");
                scanf("%d",&size);
                MyFIFOInit(fifo,size);
                break;
            case(2):
                printf("FIFO:");
                scanf("%d",&fifo);
                printf("Insert data: ");
                scanf("%d",&data);
                MyFIFOInsert(fifo,data);
                break;
            case(3):
                printf("FIFO:");
                scanf("%d",&fifo);
                data = MyFIFORemove(fifo);
                printf("%d\n",data);
                break;
            case(4):
                printf("FIFO:");
                scanf("%d",&fifo);
                data = MyFIFOPeep(fifo);
                printf("%d\n",data);
                break;
            case(5):
                printf("FIFO:");
                scanf("%d",&fifo);
                data = MyFIFOSize(fifo);
                printf("%d\n",data);
                break;
            default:
                printf("Not a valid option!\n");
                break;
            
        }
    }

    return 0;
    
}