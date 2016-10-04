class Solution(object):
    def maxRotateFunction(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        res = 0
        n = len(A)
        for i in range(n):
            res += A[i] * i
        sumval = sum(A)
        maxval = res
        for i in range(1, n):
            res = res + sumval - n * A[-i]
            maxval = max(maxval, res)
        return maxval