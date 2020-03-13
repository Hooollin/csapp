#include <stdio.h>

/* 当length = 0, length - 1为 2^32 - 1，自然会产生越界错误*/
float sum_elements(float a[], unsigned int length){
    int i = 0;
    float res = 0;
    for(; i <= length - 1; i++){
        res += a[i];
    }
    printf("%lf", res);
    return res;
}

int main(){
    float a[] = {1.0, 2.0, 3, 4, 5, 6.f };
    sum_elements(a, 0);
    return 0;
}
