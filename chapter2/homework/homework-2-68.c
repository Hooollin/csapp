#include <stdio.h>

int lower_one_mask(int n){
    int w = sizeof(int) << 3;
    return ((unsigned)-1) >> (w - n);
}

int main(){
    int x = 16;
    printf("0x%X", lower_one_mask(x));
}
