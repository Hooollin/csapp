#include  <stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
    int (*f_add)(int, int);
    f_add = add;
    int res = f_add(2, 4);
    printf("%d", res);
    return 0;
}
