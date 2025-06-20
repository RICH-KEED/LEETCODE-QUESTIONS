//9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long rev=0;

        if (x<0) return false;
        while(x!=0)
        {
            rev = (rev*10) + x%10;
            x /=10;
        }

        if (n==rev){
            return true;
        }

        return false;
    }
};