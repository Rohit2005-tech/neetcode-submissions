class Solution {
public:
    bool ispalindrome(const string& s, int left, int right){
        while (left < right) {
            if (s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right){
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                // use the one allowed deletion:
                // Either skip s[left] or skip s[right].
                return ispalindrome(s, left + 1, right) ||
                ispalindrome(s, left, right - 1);
            }
        }
        return true;
    }
};