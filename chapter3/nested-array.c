#include <stdio.h>

typedef int row3_t[3];

int main(){
    //A is an array of five rows, each row contains an array of three integers.
    row3_t A[5];
    int count = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            A[i][j] = count++;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("%d, %d, %d", A[2][4], *((int*)A + 3 * 2 + 4), -1);
    return 0;
}

