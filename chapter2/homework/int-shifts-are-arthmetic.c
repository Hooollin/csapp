#include <stdio.h>

int int_shift_are_arthmetic(){
    int shift_val = (sizeof(int) - 1) << 3;
    /* 如果是算数右移那么最后所有位都为1*/
    int t = 0xff << shift_val >> shift_val;
    return !~t;
}

int main(){
    printf("%d", int_shift_are_arthmetic());
}
