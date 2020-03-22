#include <stdio.h>
#include <stdbool.h>

typedef char byte;
bool is_little_endian(){
    short t = 0x00ff;
    byte *p = (byte*)&t;
    if((unsigned)*p > (unsigned)*(p + 1)){
            return true;
    }
    return false;
}

/* assume a 32bit matchine */
int generate_word(int d1, int d2){
    byte *p1 = (byte*)&d1;
    byte *p2 = (byte*)&d2;

    if(is_little_endian()){
        *p2 = *p1;
    }else{
        *(p2 + 3) = *(p1 + 3);
    }
    return d2;
}
int main(){
    printf("0x%x", generate_word(0x89ABCDEF, 0x76543210));
    return 0;
}
