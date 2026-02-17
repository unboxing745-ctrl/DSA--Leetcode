class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) return false;

        int original = x;
        long long sum = 0;   // changed here

        while (x != 0) {
            int r = x % 10;
            sum = sum * 10 + r;
            x = x / 10;
        }

        return sum == original;
    }
};
