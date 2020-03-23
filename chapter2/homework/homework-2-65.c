#include <stdio.h>

int odd_ones(unsigned x){
	x = x ^ (x >> 16);
	x = x ^ (x >> 8);
	x = x ^ (x >> 4);
	x = x ^ (x >> 2);
	x = x ^ (x >> 1);
	return x & 1;
}

int main(){
    int x = 0x00000000;
    printf("%d", odd_ones(x));
}
