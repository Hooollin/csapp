#include <stdio.h>

void decode1(long *xp, long *yp, long *zp){
    int x = *xp;
    int t = *zp;
    int y = *zp;
    *yp = x;
    *zp = t;
    *xp = y;
}
