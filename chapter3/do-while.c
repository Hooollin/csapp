int do_while(){
    int n = 10;
    int y = 0;
    do{
        y += 10;
        n -= 1;
    }while(n > 0);
}


int do_while_e(){
    int n = 10;
    int y = 0;
LOOP:
    n -= 1;
    y += 10;
    if(n > 0) goto LOOP;
}
