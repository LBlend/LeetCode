class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        max_length = 0
        current_length = 0
        for i in nums:
            if i == 1:
                current_length += 1
            else:
                current_length = 0
            if max_length < current_length:
                max_length = current_length
        return max_length
