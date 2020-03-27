void _while(){
    int n = 10;
    int y = 1;
    while(n > 0){
        n -= 1;
        y *= 10;
    }
}


void _while_e1(){
    int n = 10;
    int y = 1;
    goto TEST:
LOOP:
    n -= 1;
    y *= 10;
TEST:
    if(n > 0){
        goto LOOP;
    }
}


void _while_e2(){
    int n = 10;
    int y = 1;
    if(n <= 0){
        goto DONE;
    }
    do{
        n -= 1;
        y *= 10;
    }while(n > 0);
DONE:

}
