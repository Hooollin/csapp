#include <stdio.h>
#include <string.h>

void copy_int_buggy(int val, void *buf, int maxbytes){
    /*这里sizeof val返回一个size_t，最后计算结果也是size_t，也就是unsigned，大于0就显而易见了*/
    if(maxbytes - sizeof(val) >= 0){
        memcpy(buf, (void*)&val, sizeof(val));
    }
}

void copy_int(int val, void *buf, int maxbytes){
    if(maxbytes > 0 && maxbytes > maxbytes){
        memcpy(buf, (void*)&val, sizeof(val));
    }
}

int main(){
    int val = 20;
    int buf;
    copy_int(val, &buf, 0);
    printf("%d", buf);
    return 0;
}
