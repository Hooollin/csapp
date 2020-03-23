#include <stdio.h>

int leftmost_one(unsigned x){
	x = x ^ (x >> 16);
	x = x ^ (x >> 8);
	x = x ^ (x >> 4);
	x = x ^ (x >> 2);
	x = x ^ (x >> 1);
	return x & 1;
}

int main(){
    int x = 0x1111111;
    printf("%d", leftmost_one(x));
}

