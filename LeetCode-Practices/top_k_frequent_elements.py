class naive_solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for n in nums:
            freq[n] = freq.get(n, 0) + 1
        
        sorted_freq = dict(sorted(freq.items(), key = lambda item: item[1], reverse=True))
        k_most = list(sorted_freq.keys())[:n-1]

        return k_most

#Time complexity : O(n log(n))
#Space complexity: O(n)
