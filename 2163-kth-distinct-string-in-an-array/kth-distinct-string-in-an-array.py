class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        d = Counter(arr)
        print(d)

        for i in d.keys():
            if d[i] == 1:
                k -= 1
                if k == 0:
                    return i

        return ''
        