class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = INT_MAX;
        string main="";
        for(int i=0;i<strs.size();i++){
            if(min>strs[i].length()){
                min = strs[i].length();
                main = strs[i];
            }
        }
        for(int i=0;i<strs.size();i++)
        {
            string s = strs[i];
            string temp ="";
            for(int j=0;j<s.length();j++){
                    if(main[j]==s[j])
                        {
                        temp += s[j];
                        }
                    else{
                        main = temp;
                        break;
                    }
            }
        }
        return main;
    }
};