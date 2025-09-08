int fibo(int n){
    int tmp = 0;
    int tmp1 = 1;
    int res = 0;
    for (int i = 0; i < n; ++i) {
        res = tmp1 + tmp; 
        tmp = tmp1;
        tmp1 = res;
    }
return res;
}
int climbStairs(int n) {
    return fibo(n);
}
