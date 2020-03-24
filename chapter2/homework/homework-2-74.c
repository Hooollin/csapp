#include <stdio.h>

int t_sub_ok(int x, int y){
    int sum       = x - y;
    int sign_mask = 1 << 31;
    /*同号一定成功*/
    int same_sign = (x & sign_mask) && (y & sign_mask) || !(x & sign_mask) && !(y & sign_mask);

    int pos_over = !(x & sign_mask) && (y & sign_mask) && (sum & sign_mask);
    int neg_over = (x & sign_mask) && !(y & sign_mask) && !(sum & sign_mask);
    return same_sign || (!pos_over && !neg_over);
}

int main(){
    int x = 0x80000000;
    int y = 0x01231232;
    printf("%d", t_sub_ok(x, y));
}

