class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for (int x : nums) {
            if (to_string(x).length() % 2 == 0) {
                even += 1;
            }
        }
        return even;
    }
};
