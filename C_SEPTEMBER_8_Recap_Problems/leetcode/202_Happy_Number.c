bool isHappy (int n) {
    int tmp = 0;
    int tmp2 = 0;
    while(n > 9){
        while (n > 0) {
            tmp = n % 10;
            tmp *= tmp;
            n /= 10;
            tmp2 += tmp;
        }
        n = tmp2;
        tmp2 = 0;

    }
    return n == 1 || n == 7;
}
