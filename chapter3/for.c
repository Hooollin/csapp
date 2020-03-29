
int _for(){
    int y = 10;
    for(int i = 0; i < 10; i++){
        y *= 10;
    }
    return y;
}

int _for_e(){
    int y = 10;
    int i = 0;
    while(i < 10){
        y *= 10;
        i += 1;
    }
    return y;
}

int _for_goto_test(){
    int i = 0;
    int y = 10;
    goto TEST;
LOOP:
    y *= 10;
    i += 1;
TEST:
    if(i < 10){
        goto LOOP;
    }
    return y;
}

int _for_guarded_do(){
    int y = 10;
    int i = 0;
    int t = i < 10;
    if(!t){
     goto DONE;
    }
LOOP:
    y *= 10;
    i += 1;
    t = i < 10;
    goto LOOP;
DONE:
    return y;

}
