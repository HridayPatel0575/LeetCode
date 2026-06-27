class Solution {
public:
    int longestContinuousSubstring(string s) {
        vector<char> a(s.begin(), s.end());
        int l =0;
        int max=0;
        int j=1;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]+1==a[j]){
                // cout<<a[i]+1<<' '<<a[j]<<' ';
                l++;
                // cout<<"l="<<l<<'\n';
            }
            else{
                // cout<<a[i]+1<<' '<<a[j]<<'\n';
                l=0;
            }
            if(l>max){
                max = l;
            }
            j++;
        }
        return max+1;
    }
};