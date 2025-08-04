from typing import List

class BruteForce:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        solution = []
        i = 0
        j = 0
        while i < len(nums):
            while j < len(nums):
                if i == j:
                    j = j + 1
                    continue
                elif nums[i] + nums[j] == target:
                    solution.append(i)
                    solution.append(j)
                    return solution
                else:
                    j = j + 1
                    continue
            i = i + 1

class Hasher:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen:
                return [seen[complement], i]
            seen[num] = i
        return []