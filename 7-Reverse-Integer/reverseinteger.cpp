int reverse(int x) {
        int temp = 0;
        int n = x;
        int rev = 0;
        while(n != 0){
            temp = n % 10;
            if(rev > INT_MAX/10 || (rev == INT_MAX / 10 && temp > 7))
                return 0;
            if(rev < INT_MIN/10 || (rev == INT_MIN / 10 && temp < -8))
                return 0;
            rev = (rev * 10) + (temp);
            n /= 10;
        }
        return rev;
    }