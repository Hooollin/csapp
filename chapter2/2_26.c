#include <stdio.h>
#include <string.h>

/*size_t strlen(char *str);*/
/* 很显然strlen(s) 为0 而strlen(t)不为0时，返回结果为1*/
int strlonger(char *s, char *t){
    return strlen(s) - strlen(t) > 0;
}
/* 修改后 */
int strlonger(char *s, char *t){
    return strlen(s) > strlen(t);
}

int main(){
    printf("%d", strlonger("", "h"));
}
