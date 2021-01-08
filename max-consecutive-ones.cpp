class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_ones = 0;
        int max_ones = 0;
        for (int x : nums) {
            if (x == 1) {
                current_ones += 1;
            } else {
                current_ones = 0;
            }
            
            if (current_ones > max_ones) {
                max_ones = current_ones;
            }
        }
        return max_ones;
    }
};
