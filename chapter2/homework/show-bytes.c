#include <stdio.h>


int main(){
    int bytes = 0x01234567;
    printf("0x%08x\n", bytes);
    char *prt = (char*)&bytes;
    printf("0x%02x 0x%02x 0x%02x 0x%02x", *prt, *(prt + 1), *(prt + 2),  *(prt + 3));
    return 0;
}

