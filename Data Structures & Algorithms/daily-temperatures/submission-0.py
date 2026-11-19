class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        nge = findNGE(temperatures)
        n = len(temperatures)
        ans = [0] * n

        for i in range(n):
            if nge[i] != -1:
                ans[i] = nge[i] - i
        return ans



def findNGE(nums):
    n = len(nums)
    stack = []
    ans = [-1] * n

    for i in range(n - 1, -1, -1):
        while stack and nums[stack[-1]] <= nums[i]:
            stack.pop()

        if stack:
            ans[i] = stack[-1]

        stack.append(i)

    return ans