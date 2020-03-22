#include <stdio.h>

unsigned replace(unsigned x, unsigned y){
    unsigned mask = 0xff;
    return (x & mask) | (y & ~mask);
}

int main(){
    unsigned x = 0x12345678;
    unsigned y = 0xAAAAAAFF;
    printf("0x%8X", replace(x, y));
    return 0;
}
