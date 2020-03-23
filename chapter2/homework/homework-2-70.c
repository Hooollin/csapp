#include <stdio.h>

int fits_bits(int x, int n){
    x >>= n - 1;
    printf("%X\n", ~x);
    return !x || !~x;
}

int main(){
    int x = 0xfffffff7;
    printf("%d", fits_bits(x, 3));
    return 0;
}
