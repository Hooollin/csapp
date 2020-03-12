#include <stdio.h>
#define INT_MAX 2147483647

int main(){
    // -INT_MAX - 1最后变成了0x80000000，不相等
    printf("%d\n", -INT_MAX - 1 == 2137483648u);
    // int最小值小于int最大值，结果为true
    printf("%d\n", -INT_MAX - 1 < INT_MAX);
    // 转化为unsigned int进行比较，结果为false
    printf("%d\n", -INT_MAX - 1u < INT_MAX);
    // 结果为true
    printf("%d\n", -INT_MAX - 1 < -INT_MAX);
    // 结果为true， 左边等于右边减一
    printf("%d\n", -INT_MAX - 1u < -INT_MAX);
    return 0;
}

