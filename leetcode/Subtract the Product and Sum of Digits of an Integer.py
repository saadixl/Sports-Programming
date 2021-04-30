class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product = 1
        sum = 0
        digits = list(str(n))
        for d in digits:
            d = int(d)
            product = product * d
            sum = sum + d
        return product - sum
