#include <stdio.h>

int lower_one_mask(int n){
    int x = 1 << (n - 1);
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    return x;
}


int main(){
    int x = 32;
    printf("0x%X", lower_one_mask(x));
}
