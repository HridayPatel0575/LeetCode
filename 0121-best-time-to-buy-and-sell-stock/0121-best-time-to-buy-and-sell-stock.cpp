class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int max=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }

            int pro = prices[i]-minprice;
            if(pro>max){
                max=pro;
            }
        }
        return max;
    }
};