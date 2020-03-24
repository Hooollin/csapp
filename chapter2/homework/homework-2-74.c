#include <stdio.h>

int t_sub_ok(int x, int y){
    /*同号一定成功*/
    if(x >= 0 && y >= 0 || x <= 0 && y <= 0){
        return 1;
    }
    if(x > 0 && y < 0){
        if(x - y < x && x - y < y){
            return 0;
        }
    }
    if(x < 0 && y > 0){
        if(x - y > x && x - y > y){
            return 0;
        }
    }
    return 1;
}

int main(){
    int x = 0x7fffffff;
    int y = 0xffffffff;
    printf("%d", t_sub_ok(x, y));
}

