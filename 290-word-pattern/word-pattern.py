class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s_list = s.split(' ')
        r = {}
        if len(s_list) != len(pattern):
            return False
        for i in range(len(pattern)):
            if pattern[i] in r.keys():
                if r[pattern[i]] != s_list[i]:
                    return False
            else:
                if s_list[i] in r.values():
                    return False
                r[pattern[i]] = s_list[i]

        return True
        