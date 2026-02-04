# Last updated: 04/02/2026, 10:12:46
class Solution:
    def sumFourDivisors(self, nums: List[int]) -> int:
        total = 0

        for num in nums:
            divisors = []
            for i in range(1, int(num**0.5) + 1):
                if num % i == 0:
                    divisors.append(i)
                    if i != num // i:
                        divisors.append(num // i)

            if len(divisors) == 4:
                total += sum(divisors)

        return total

            

