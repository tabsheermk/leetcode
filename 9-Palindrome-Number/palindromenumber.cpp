bool isPalindrome(int x) {
        long temp,rev=0,n = x;
        while(n>0)
        {
            temp = n%10;
            rev = (rev*10)+temp;
            n/=10;
        }
        return (rev == x);
    }