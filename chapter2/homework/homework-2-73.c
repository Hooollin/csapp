#include <stdio.h>
#define TMax 2147483647
#define TMin -2147483647 - 1

int saturating_add(int x, int y){
    int sum       = x + y;
    int sign_mask = 1 << 31;
    int pos_over  = !(x & sign_mask) && !(y & sign_mask) && (sum & sign_mask);
    int neg_over  = (x & sign_mask) && (y & sign_mask) && !(sum & sign_mask);
    (pos_over && (sum = TMax) || neg_over && (sum = TMin));
    return sum;
}

int main(){
    int x = 0x80000000;
    int y = 0x80000000;
    printf("%d, %d, %d, %d", x, y, x + y, saturating_add(x, y));
    return 0;
}
