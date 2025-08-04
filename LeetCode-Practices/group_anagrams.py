from typing import List

class HashMap:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        seen = {}
        for i, s in enumerate(strs):
            ns = ''.join(sorted(s))
            if ns in seen:
                seen[ns].append(s)
            else:
                seen[ns] = [s]
        return list(seen.values())
    
class BetterSolution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        seen = {}
        for word in strs:
            count = [0] * 26
            for char in word:
                count[ord(char) - ord('a')] += 1
            key = tuple(count)
            if key in seen:
                seen[key].append(word)
            else:
                seen[key] = [word]
        return list(seen.values())