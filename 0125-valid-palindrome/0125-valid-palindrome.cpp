class Solution {
public:
    bool isPalindrome(string s) {
        bool pal;
        string result = "";
        for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
        }
        for (char c : s) {
        if (isalpha(c) || isdigit(c)) {
            result += c;
        }
        if(s.size()==0){
            return 1;
        }
        }
        s = result;
        for(int i=0;i<s.length();i++){
            if(s[i]==s[s.length()-i-1]){
                pal = true;
            }
            else{
                pal = false;
                break;
            }
        }
        return pal;
    }
};