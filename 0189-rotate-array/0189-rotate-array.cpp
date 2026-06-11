class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if (n == 1) {
            return;
        }

        k %= n;

        int j, temp;

        for (int i = 0; i < n / 2; i++) {
            j = n - i - 1;
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }

        for (int l = 0; l < k / 2; l++) {
            j = k - l - 1;
            temp = nums[l];
            nums[l] = nums[j];
            nums[j] = temp;
        }

        int left = k;
        int right = n - 1;

        while (left < right) {
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
};