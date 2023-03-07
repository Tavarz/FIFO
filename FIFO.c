

void main(void) {

    
    int option;
    while(1) {
        printf("Choose an option: \n1:MyFIFOInit()\n2:MyFIFOInsert()\n3:MyFIFORemove()\n4:MyFIFOPeep\n5:MyFIFOSize\n");
        option = readInt();
        switch(option)  {
            case(1):
                printf("FIFO size:");
                int size = readInt();
                FIFOInit(size);
                break;
            case(2):

                break;
            case(3):

                break;
            case(4):

                break;
            case(5):

                break;
        }
    }
    
}

void MyFIFOInit(int size) {

}

int MyFIFOInsert(int data) {

}

int MyFIFORemove() {

}

int MyFIFOPeep() {

}

int MyFIFOSize() {
    
}