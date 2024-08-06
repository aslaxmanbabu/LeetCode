class Solution:
    def minimumPushes(self, word: str) -> int:
        d = Counter(word)
        count = 1
        result = 0
        for i, j in d.most_common():
            if count <= 8:
                result += j
            elif count > 8 and count <= 16:
                result += (j*2)
            elif count  > 16 and count <= 24:
                result += (j * 3)
            else:
                result += (j*4)
            count += 1
        
        return result
        