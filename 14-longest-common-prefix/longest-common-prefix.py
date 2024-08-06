class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ""
        
        if len(strs) == 1:
            return strs[0]
        i = 1
        length = 0
        minL = len(strs[0])
        for s in strs:
            minL = min(minL, len(s))

        prefix = ''
        while i <= minL:
            prefix = strs[0][:i]
            for x in strs:
                if prefix != x[:i]:
                    return prefix[:i-1]
            i += 1

        return prefix


