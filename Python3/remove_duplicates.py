class Solution:
    def removeDuplicates(self, nums: list) -> int:
        if not nums:
            return 0

        i = 1
        rewrite = 1
        while i < len(nums):
            if nums[i] != nums[i - 1]:
                nums[rewrite] = nums[i]
                rewrite += 1
            i += 1
        return rewrite


if __name__ == "__main__":
    nums = [1, 1, 2]
    sol = Solution()
    k = sol.removeDuplicates(nums)
    print(nums)