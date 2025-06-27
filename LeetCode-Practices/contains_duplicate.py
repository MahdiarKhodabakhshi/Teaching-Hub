class BruteForce:
    def contains_duplicate(self, nums):
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] == nums[j]:
                    return True
        return False
    
class Hasher:
    def contain_duplicate(self, nums):
        seen = set()
        for num in nums:
            if num in seen:
                return True
            seen.add(num)
        return False
    

nums = [1, 2, 3, 3]


bf = BruteForce()
hasher = Hasher()

bf_results = bf.contains_duplicate(nums)
hasher_results = hasher.contain_duplicate(nums)

print(bf_results)
print(hasher_results)