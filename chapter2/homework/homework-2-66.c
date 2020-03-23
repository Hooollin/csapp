#include <stdio.h>

int leftmost_one(unsigned x){
    x |= x >> 16;
    x |= x >> 8;
    x |= x >> 4;
    x |= x >> 2;
    x |= x >> 1;
    return x ^ (x >> 1);
}

int main(){
    int x = 0xFFFFFFFF;
    printf("0x%X", leftmost_one(x));
}

