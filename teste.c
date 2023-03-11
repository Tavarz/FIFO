#include "FIFO.h"
#include <stdio.h>
#include <stdint.h>

int main(void) {
    int option,size,data,free,fifo;
    while(1) {
        printf("\nChoose an option: \n1:MyFIFOInit()\n2:MyFIFOInsert()\n3:MyFIFORemove()\n4:MyFIFOPeep\n5:MyFIFOSize\n\n");
        scanf("%d",&option);
        switch(option)  {
            case(1):
                printf("FIFO:");
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
        }
    }

    return 0;
    
}