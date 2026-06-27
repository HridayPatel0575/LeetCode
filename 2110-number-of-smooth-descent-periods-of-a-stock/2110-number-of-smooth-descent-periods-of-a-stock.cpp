class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long cont=1;
        long count =0;
        int j=1;
        for(int i =0;i<prices.size();i++){
            if(prices.size()==1){
                return 1;
            }
            if(prices[i]-1==prices[j]){
                cont++;
                // cout<<"cont1:"<<cont<<'\n';
            }
            else{
                count = count+cont*(cont+1)/2;
                cont=1;
            }
            if(j!=prices.size()-1){
            j++;
            }

        }
        return count;
    }
};