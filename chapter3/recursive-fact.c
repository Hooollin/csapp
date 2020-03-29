long rfact(long n){
    long result;
    if(n <= 1){
        result = 1;
    }else{
        return n * rfact(n - 1);
    }
    return result;
}
