#include <stdio.h>

unsigned rotate_left(unsigned x, int n){
    int w = sizeof(int) << 3;
    return (x << n) | (x >> (w - n));
}

int main(){
    unsigned x = 0x12345678;
    int n = 0;
    printf("0x%x", rotate_left(x, n));
}
