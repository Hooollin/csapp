#include <stdio.h>
#define TMax 2147483647
#define TMin -2147483647 - 1

int saturating_add(int x, int y){
    if(x > 0 && y > 0 && x + y < x && x + y < y){
        return TMax;
    }
    if(x < 0 && y < 0 && x + y > x && x + y > y){
        return TMin;
    }
    return x + y;
}

int main(){
    int x = 0x80000000;
    int y = 0x80000000;

    printf("%d, %d, %d, %d", x, y, x + y, saturating_add(x, y));
    return 0;
}
