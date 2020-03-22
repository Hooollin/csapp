#include <stdio.h>

int check(int x){
    int t = 0xffffffff;
    int shift_val = (sizeof(int) - 1) << 3;

    /*A：判断是否全1可以直接先按位取反，然后取非，很显然在全为1的时候a的值为1， 否则为0*/
    int a = !~x;
    /*B：判断是否全为0就可以直接取非了，只有全为0时结果为1*/
    int b = !x;
    /*C：最高有效字节全为1，那么算数右移会在高位补1，因此可以用相同的方法判断*/
    int c = !(~((x >> shift_val)));
    /*D：最低有效字节全为0，右移24位后全都是0*/
    int d = !(x << shift_val);
    printf("%d\n", d);
    return a || b || c || d;
}

int main(){
    printf("%d", check(0x0));
    return 0;
}
