#include <stdio.h>

int main(){
    int x = 10;
    printf("%d %d\n", x * 6, (x << 2) + (x << 1));
    printf("%d %d\n", x * 31, (x << 5) - x);
    printf("%d %d\n", x * -6, -((x << 2) + (x << 1)));
    printf("%d %d\n", x * 55, (x << 6) - (x << 3) - x);
    return 0;
}
