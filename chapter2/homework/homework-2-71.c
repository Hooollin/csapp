#include <stdio.h>
typedef unsigned packet_t;

int xbyte(packet_t word, int bytenum){
    return word >> (bytenum << 3) & 0xFF;
}

int correct_xbyte(packet_t word, int bytenum){
    word <<= (sizeof(packet_t) - 1 - bytenum) << 3;
    return ((int)word) >> (sizeof(packet_t) - 1 << 3);
}

int main(){
    packet_t word = 0x00ffffff;
    int bytenum   = 3;
    printf("%x", correct_xbyte(word, bytenum));
    //printf("%x", xbyte(word, bytenum));
}
