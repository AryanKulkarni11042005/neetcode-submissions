class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        result = set();
        for n in nums:
            if n in result:
                return True
            else:
                result.add(n)
        return False