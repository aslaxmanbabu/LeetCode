class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        x = k % sum(chalk)
        i = 0
        while (x):
            x -= chalk[i]
            if(x < 0):
                return i
            i += 1

        return i
        