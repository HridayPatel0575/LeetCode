class Solution {
public:
    bool isPalindrome(int x) {
        string n = to_string(x);
        bool value = true;
        for(int i=0;i<n.length();i++){
            if(n[i]!=n[n.size()-i-1]){
                value = false;
            }
        }
        return value;
    }
};