#include <stdio.h>
#include <stdbool.h>

bool is_little_endian(){
    int a = 1;
    return *(char*)&a;
}
int main(){
    printf("%d", is_little_endian());
}
