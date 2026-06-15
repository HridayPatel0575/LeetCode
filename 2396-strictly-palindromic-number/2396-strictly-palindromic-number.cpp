class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        string a;
        int num = n;
        bool value  = true;
        for(int i=2;i<=n-2;i++){
                while(num>0){
                a += to_string(num%i);
                num = num/i;
                }
        for(int j=0;j<a.size()/2;j++){
            if(a[j]!=a[a.size()-1-j]){
                value = false;
                break;
            }
        }
        if(value==false){
            break;
        }
        a = "";
        num = n;
        }
        return value;
    }
};