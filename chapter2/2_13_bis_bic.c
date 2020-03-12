#include <stdio.h>

int bis(int x, int m){
    return x | m;
}

int bic(int x, int m){
    return x & (~m);
}

/* Compute x|y only calls to functions bis and bic */
int bool_or(int x, int y){
    return bis(x, y);
}

/*Compute x^y only calls to functions bis and bic */
int bool_xor(int x, int y){
    return bis(bic(x, y), bic(y, x));
}

int main(){
    int x = bool_xor(0x8, 0x7);
    printf("0x%x", x);
    return 0;
}
