class BruteForce:
    def brute_force(self, s, t):
        if len(s) != len(t):
            return False
        
        t_list = list(t)


        for i in s:
            if i in t_list:
                t_list.remove(i)
            else:
                return False
            
        return True
    
class MergeSort:
    def merge_sort(self, arr):
        if len(arr) <= 1:
            return arr

        mid   = len(arr) // 2
        left  = self.merge_sort(arr[:mid])
        right = self.merge_sort(arr[mid:])

        return self._merge(left, right)

    def _merge(self, left, right):
        result, i, j = [], 0, 0
        while i < len(left) and j < len(right):
            if left[i] <= right[j]:
                result.append(left[i]);  i += 1
            else:
                result.append(right[j]); j += 1
        result.extend(left[i:])
        result.extend(right[j:])
        return result

    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        return self.merge_sort(list(s)) == self.merge_sort(list(t))
 

test = BruteForce()
merge_sort_test = MergeSort()

print(merge_sort_test.isAnagram("mahdiar", "mahdiar"))
print(merge_sort_test.isAnagram("mahdiyar", "mahdiar"))

print(test.brute_force("mahdiar", "mahdiyar"))
print(test.brute_force("mahdiar", "mahdiar"))