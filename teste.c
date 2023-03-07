#include "FIFO.h"

void main(void) {
    int option,size,data,free;
    while(1) {
        printf("Choose an option: \n1:MyFIFOInit()\n2:MyFIFOInsert()\n3:MyFIFORemove()\n4:MyFIFOPeep\n5:MyFIFOSize\n");
        option = readInt();
        switch(option)  {
            case(1):
                printf("FIFO size:");
                size = readInt();
                MyFIFOInit(size);
                break;
            case(2):
                printf("Insert data");
                data = readInt();
                MyFIFOInsert(data);
                break;
            case(3):
                data = MyFIFORemove();
                printInt(data);
                break;
            case(4):
                MyFIFOPeep();
                break;
            case(5):
                MyFIFOSize();
                break;
        }
    }
    
}