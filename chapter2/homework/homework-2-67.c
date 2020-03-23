#include <stdio.h>

int int_size_is_32(){
    int a = 1 << 15;
    a <<= 15;
    int set_msb = a << 1;
    int beyond_msb = a << 2;
    return set_msb && !beyond_msb;
}

int main(){
    printf("%d", int_size_is_32());
    return 0;
}
