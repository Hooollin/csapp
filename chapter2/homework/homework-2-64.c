#include <stdio.h>

int odd_ones(unsigned x){
    unsigned mask = 0x55555555;
    return !!(x & mask);
}

int main(){
    unsigned x = 0x00000001;
    printf("%d", odd_ones(x)); 
}
