class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        for i in range(len(nums)):
            for k in range(len(nums)):
                if k == len(nums): return False # checks if we are out of bounds
                if i != k:
                    if nums[i] == nums[k]: return True
        return False