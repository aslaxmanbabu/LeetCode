class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        d1 = Counter(target)
        arr.sort()
        d2 = Counter(arr)

        if d1 == d2:
            return True

        return False
        