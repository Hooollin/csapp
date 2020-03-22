#include <stdio.h>

typedef char byte;

unsigned replace_byte(unsigned x, int i, unsigned char b){
    if(i >= sizeof(x)){
        return x;
    }
    byte *p = (byte*)&x;
    *(p + i) = b;
    return x;
}

int main(){
    unsigned x = 0x12345678;
    printf("0x%X",replace_byte(x, 0, 0xAB));
    return 0;
}
