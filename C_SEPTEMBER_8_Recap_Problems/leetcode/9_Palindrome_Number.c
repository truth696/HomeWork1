bool isPalindrome(int x) {
    long long  tmp = 0, cpy = x;

    while (x > 0) {
        tmp += x % 10;
        
        if (x > 9) tmp *=10;
        x /=10;
    }
    if (tmp == cpy) return 1;
return 0;
}
