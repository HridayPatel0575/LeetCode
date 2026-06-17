#include <climits>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int count=0;
        count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                count++;
                i--;
            }
        }
        return size-count;
    }
};