#include <stdio.h>

typedef char byte;

unsigned replace_byte(unsigned x, int i, unsigned char b){
    if(i > sizeof(unsigned)){
        return x;
    }
    return x & ~(0xFF << (i << 3)) | (b << (i << 3));
}

int main(){
    unsigned x = 0x12345678;
    printf("0x%X",replace_byte(x, 2, 0xBB));
    return 0;
}
