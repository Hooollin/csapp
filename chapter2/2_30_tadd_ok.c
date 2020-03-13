#include <stdio.h>

int tadd_ok(int x, int y){
    int res = x + y;
    if(x > 0 && y > 0){
        if(res < 0){
            return 0;
        }else{
            return 1;
        }
    }else if(x < 0 && y < 0){
        if(res > 0){
            return 0;
        }else{
            return 1;
        }
    }else{
        return 1;
    }
}
int main(){
    printf("%d", tadd_ok(2147483647, 2147483647));
    return 0;
}
