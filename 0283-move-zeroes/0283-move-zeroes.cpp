class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int temp;
        for (int j=0;j<size;j++){
            for(int i=0;i<size-1;i++){
                if(nums[i]==0){
                    temp=nums[i];
                    nums[i]=nums[i+1];
                    nums[i+1]=temp;
                }
            }
        }  
    }
};