int test(int a){
    if(a  > 10){
        a += 4;
    }else{
        a -= 2;
    }
    return a;
}
int main(){
    test(10);
    return 0;
}
