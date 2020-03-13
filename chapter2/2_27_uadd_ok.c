#include <stdio.h>

/* Detemine whether arguments can be added without overflow */
unsigned uadd_ok(unsigned x, unsigned y){
    unsigned res = x + y;
    if(res >= x){
        return 1;
    }
    return 0;
}

int main(){
    printf("%d", uadd_ok(0xfff, 0xfffff));
    return 0;
}
