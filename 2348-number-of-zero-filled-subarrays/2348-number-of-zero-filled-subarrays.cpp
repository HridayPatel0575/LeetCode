class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long cont = 0;
        long count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cont++;
            }
            else if(nums[i]!=0){
                long n = cont;
                count = count+n*(n+1)/2;
                cont=0;
            }
            if(i==nums.size()-1){
                long n = cont;
                count = count+n*(n+1)/2;
                cont=0;
            }
            
        }
        return count;
    }
};