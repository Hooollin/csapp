#include <stdio.h>
#include <stdbool.h>

bool is_little_endian(){
    short bytes = 0x00ff;
    unsigned char *byte = (unsigned char *) &bytes;
    if(*byte > *(byte + 1)){
        return 1;
    }else
        return 0;
}
int main(){
    printf("%d", is_little_endian());
}
