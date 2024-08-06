class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        result = ''
        i = 0
        n1 = len(word1)
        n2 = len(word2)
        while i < n1 and i < n2:
            result += word1[i] + word2[i]
            i += 1

        result += word1[i:]
        result += word2[i:]
        
        return result
        